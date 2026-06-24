#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    scanf("%s %s", str1, str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for(int i = 0; i < 256; i++) {

        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}