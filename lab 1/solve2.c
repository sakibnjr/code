#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000];
    int characters = 0, words = 0, lines = 0;
    int i = 0;
    int in_word = 0;

    printf("Enter the Identifier input string (End with Ctrl+D in Linux or Ctrl+Z in Windows):\n");

    while ((input[i] = getchar()) != EOF) {
        characters++;
      
        if (input[i] == '\n') {
            lines++;  
            if (in_word) {
                words++;  
                in_word = 0; 
            }
        }
      
        if (isspace(input[i])) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;  
        }
        
        i++;
    }
  
    if (in_word) {
        words++;
        lines++;  
    }
    
    if (characters > 0 && lines == 0) {
        lines = 1;  
    }

    printf("\nNo of characters: %d\n", characters);
    printf("No of words: %d\n", words);
    printf("No of lines: %d\n", lines);

    return 0;
}