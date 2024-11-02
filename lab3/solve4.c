#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the Identifier input string:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *token = strtok(str, " "); 
    printf("Output:\n");
    while (token != NULL) {
        printf("%s\n", token); 
        token = strtok(NULL, " "); 
    }

    return 0;
}
