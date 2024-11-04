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
    FILE *file = fopen("input.txt", "r");  // Open the file for reading
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;  // Exit if the file cannot be opened
    }

    char input[100];
    
    // Read each line from the file
    while (fgets(input, sizeof(input), file) != NULL) {
        // Remove the newline character if it exists
        input[strcspn(input, "\n")] = '\0';

        printf("Input: %s\n", input);
        if (matches_a_star_b(input)) {
            printf("Output: Accepted\n");
        } else {
            printf("Output: Rejected\n");
        }
    }

    fclose(file);  // Close the file
    return 0;
}
