#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter the Identifier input file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; 
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++; 
        
        if (ch == '\n') {
            lines++;  
            if (in_word) {
                words++;  
                in_word = 0;
            }
        }

        if (isspace(ch)) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;  
        }
    }

    if (in_word) {
        words++;
        lines++;  
    }
   
    if (characters > 0 && lines == 0) {
        lines = 1;  
    }

    fclose(file);

    printf("\nNo of characters: %d\n", characters);
    printf("No of words: %d\n", words);
    printf("No of lines: %d\n", lines);

    return 0;
}
