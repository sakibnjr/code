#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_vowels_consonants_digits(const char *str, int *vowels, int *consonants, int *digits) {
    *vowels = *consonants = *digits = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++; 
            } else {
                (*consonants)++; 
            }
        } else if (isdigit(ch)) {
            (*digits)++; 
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants, digits;

    printf("Enter input string:\n");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    count_vowels_consonants_digits(str, &vowels, &consonants, &digits);

    printf("Output:\n");
    printf("No of vowels: %d\n", vowels);
    printf("No of consonants: %d\n", consonants);
    printf("No of digits: %d\n", digits);

    return 0;
}
