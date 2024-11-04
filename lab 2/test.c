#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter the input string: ");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'a') {
            printf("Accepted\n");
            break;
        }
        else printf("Rejected");
    }

    return 0;
}