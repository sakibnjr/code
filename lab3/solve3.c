#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tokenize_string(const char *str) {
    int i = 0, j = 0;
    char token[100];

    while (str[i] != '\0') {
        
        while (str[i] != '\0' && isspace(str[i])) {
            i++;
        }

        if (str[i] == '\0') {
            break;
        }

        j = 0;
        while (str[i] != '\0' && !isspace(str[i])) {
            token[j++] = str[i++];
        }
        
        token[j] = '\0';

        printf("%s\n", token);
    }
}

int main() {
    char str[100];

    printf("Enter the Identifier input string:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Output:\n");
    tokenize_string(str);

    return 0;
}
