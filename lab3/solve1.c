#include <stdio.h>

int main() {
    char str[100];
    char result[100]; // To store the modified string without whitespace
    int j = 0; // Index for the result array

    printf("Enter the identifier input string:\n");
    fgets(str, sizeof(str), stdin); // Read the input string

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is not whitespace
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            result[j] = str[i]; // Add non-whitespace characters to the result
            j++; // Increment the index for the result array
        }
    }
    
    result[j] = '\0'; // Null-terminate the result string

    printf("Output:\n%s\n", result); // Print the modified string

    return 0;
}
