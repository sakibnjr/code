#include <stdio.h>
#include <string.h>

void remove_whitespace(char *str) {
    int i, j = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
       
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[100];

    printf("Enter the identifier input string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    remove_whitespace(str);
    
    printf("Output:\n%s\n", str);

    return 0;
}
