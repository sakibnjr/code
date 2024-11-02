#include <stdio.h>
#include <string.h>

int matches_a_plus(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }
#include <stdio.h>
#include <string.h>

int matches_a_plus(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }

    while (*str) {
        if (*str != 'a') {
            return 0;
        }
        str++;
    }
    
    return 1;
}

int main() {
    char input[100];

    printf("Enter the input string: ");
    scanf("%s", input);

    printf("Input: %s\n", input);
    if (matches_a_plus(input)) {
        printf("Output: Accepted\n");
    } else {
        printf("Output: Rejected\n");
    }

    return 0;
}
    while (*str) {
        if (*str != 'a') {
            return 0;
        }
        str++;
    }
    
    return 1;
}

int main() {
    char input[100];

    printf("Enter the input string: ");
    scanf("%s", input);

    printf("Input: %s\n", input);
    if (matches_a_plus(input)) {
        printf("Output: Accepted\n");
    } else {
        printf("Output: Rejected\n");
    }

    return 0;
}