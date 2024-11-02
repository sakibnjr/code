#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool match_a_star_b(const char *str) {
    int i = 0;
    while (str[i] == 'a') {
        i++;
    }

    if (str[i] == 'b' && str[i + 1] == '\0') {
        return true;
    } else {
        return false;
    }
}

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char str[100];
    while (fgets(str, sizeof(str), file) != NULL) {
   
        str[strcspn(str, "\n")] = '\0';

        char *start = str;
        while (*start == ' ') start++;  
        char *end = start + strlen(start) - 1;
        while (end > start && *end == ' ') end--; 
        *(end + 1) = '\0';

        // Check if the trimmed string matches a*b pattern
        if (match_a_star_b(start)) {
            printf("Accepted\n");
        } else {
            printf("Rejected\n");
        }
    }

    fclose(file);
    return 0;
}
