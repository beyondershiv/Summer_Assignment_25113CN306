#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100];
    char word[100];

    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    int maxLen = 0;

    while(1) {

        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {

            word[j] = '\0';

            if(j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}