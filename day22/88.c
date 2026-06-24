#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != ' ')
            result[j++] = str[i];
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}