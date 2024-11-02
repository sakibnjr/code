#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 

void count_articles(const char *str, int *count_a, int *count_an, int *count_the) {
    char *token;
    char *temp_str = strdup(str); 

    *count_a = *count_an = *count_the = 0;

    token = strtok(temp_str, " ");
    while (token != NULL) {
        
        if (strcasecmp(token, "a") == 0) {
            (*count_a)++;
        } else if (strcasecmp(token, "an") == 0) {
            (*count_an)++;
        } else if (strcasecmp(token, "the") == 0) {
            (*count_the)++;
        }
        token = strtok(NULL, " ");
    }
    free(temp_str); 
}

int main() {
    char str[256];
    int count_a, count_an, count_the;

    printf("Enter the Identifier input string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    count_articles(str, &count_a, &count_an, &count_the);

    printf("Output:\n");
    printf("Count of 'a': %d\n", count_a);
    printf("Count of 'an': %d\n", count_an);
    printf("Count of 'the': %d\n", count_the);

    return 0;
}