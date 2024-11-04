#include <stdio.h>
#include <string.h>

int matches_a_plus(const char *str) {
    int len = strlen(str);  // Get the length of the string

    if (len < 1) {
        return 0;  // Reject if the string is empty
    }

    // Check that every character in the string is 'a'
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a') {
            return 0;  // Reject if any character is not 'a'
        }
    }

    return 1;  // Accept if the pattern matches a+
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
