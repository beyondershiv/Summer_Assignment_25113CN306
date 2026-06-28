#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter ID, Title, Author: ");
        scanf("%d %s %s", &b[i].id, b[i].title, b[i].author);
    }

    printf("\n--- Library Records ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", b[i].id, b[i].title, b[i].author);
    }

    return 0;
}
