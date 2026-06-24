#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len; i++) {

        for(int j = i + 1; j < len; j++) {

            if(str[i] == str[j]) {
                printf("%c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character");

    return 0;
}