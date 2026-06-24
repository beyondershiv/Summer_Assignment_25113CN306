#include <stdio.h>

int main() {
    char str[200];
    int words = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i-1] == ' '))
            words++;
    }

    printf("Words = %d", words);

    return 0;
}