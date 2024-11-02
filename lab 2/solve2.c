#include <stdio.h>
#include <string.h>

int matches_a_star_b(const char *str) {
    int i = 0;
    while (str[i] == 'a') {
        i++;
    }
    if (str[i] == 'b' && str[i + 1] == '\0') {
        return 1;
    }
    return 0;
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