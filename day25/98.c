#include <stdio.h>

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int freq[256] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]] = 1;

    for(int i = 0; str2[i] != '\0'; i++) {

        if(freq[(unsigned char)str2[i]] == 1) {
            printf("%c", str2[i]);
            freq[(unsigned char)str2[i]] = 2;
        }
    }

    return 0;
}