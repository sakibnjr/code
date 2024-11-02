#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 256

void identify_comments(char lines[MAX_LINES][MAX_LENGTH], int line_count) {
    for (int i = 0; i < line_count; i++) {
        char *single_line_comment = strstr(lines[i], "//"); 
        char *multi_line_comment_start = strstr(lines[i], "/*"); 
        char *multi_line_comment_end = strstr(lines[i], "*/"); 
        if (single_line_comment != NULL) {
            printf("Single-line comment: %s\n", single_line_comment);
        }

        if (multi_line_comment_start != NULL) {
           
            printf("Multi-line comment: %s", multi_line_comment_start);
           
            if (multi_line_comment_end != NULL) {
                printf("\n"); 
            } else {
               
                for (i++; i < line_count; i++) {
                    printf("%s", lines[i]);
                   
                    if (strstr(lines[i], "*/") != NULL) {
                        break;
                    }
                }
            }
        }
    }
}

int main() {
    char lines[MAX_LINES][MAX_LENGTH];
    int line_count = 0;

    printf("Enter the Identifier input (press Ctrl+D or Ctrl+Z to end input):\n");

    while (line_count < MAX_LINES && fgets(lines[line_count], sizeof(lines[line_count]), stdin) != NULL) {
        line_count++;
    }

    identify_comments(lines, line_count);

    return 0;
}
