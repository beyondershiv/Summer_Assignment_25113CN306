#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0')
        length++;

    if(str[length-1] == '\n')
        length--;

    printf("Length = %d", length);

    return 0;
}