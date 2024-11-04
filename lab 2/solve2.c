#include <stdio.h>
#include <string.h>

int matches_a_star_b(const char *str) {
    int len = strlen(str);  // Get the length of the string

    if (len < 1) {
        return 0;  // Reject if the string is empty
    }

    if (str[len - 1] != 'b') {
        return 0;  // Reject if the last character is not 'b'
    }

    // Check that all preceding characters are 'a'
    for (int i = 0; i < len - 1; i++) {
        if (str[i] != 'a') {
            return 0;  // Reject if any character before the last 'b' is not 'a'
        }
    }

    return 1;  // Accept if the pattern matches a*b
}

int main() {
    char input[100];

    printf("Enter the input string: ");
    scanf("%s", input);

    printf("Input: %s\n", input);
    if (matches_a_star_b(input)) {
        printf("Output: Accepted\n");
    } else {
        printf("Output: Rejected\n");
    }

    return 0;
}
