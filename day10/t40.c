#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print increasing characters
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        // Print decreasing characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
