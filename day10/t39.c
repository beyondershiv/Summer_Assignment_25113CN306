#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // Print decreasing numbers
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
