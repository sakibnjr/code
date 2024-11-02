#include <stdio.h>
#include <ctype.h>
#include <string.h>  

void remove_special_characters(const char *str, char *result) {
    int j = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (isalnum(str[i])) {
            result[j++] = str[i]; 
        }
    }
    result[j] = '\0'; 
}

int main() {
    char str[100];
    char result[100];

    printf("Enter the Identifier input string:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  

    remove_special_characters(str, result);

    printf("Output:\n%s\n", result);

    return 0;
}
