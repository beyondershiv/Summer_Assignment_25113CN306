#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main() {
    struct Book b[50];
    int n=0, choice, i;
    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n2. Display Books\n3. Issue Book\n4. Return Book\n5. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter id title author: ");
                    scanf("%d %s %s", &b[n].id, b[n].title, b[n].author);
                    b[n].issued=0; n++; break;
            case 2: for(i=0;i<n;i++) printf("%d %s %s %s\n", b[i].id, b[i].title, b[i].author, b[i].issued?"Issued":"Available"); break;
            case 3: {int id; printf("Enter id: "); scanf("%d",&id);
                    for(i=0;i<n;i++) if(b[i].id==id) { b[i].issued=1; printf("Book issued.\n"); break; }
                    if(i==n) printf("Not found!\n"); } break;
            case 4: {int id; printf("Enter id: "); scanf("%d",&id);
                    for(i=0;i<n;i++) if(b[i].id==id) { b[i].issued=0; printf("Book returned.\n"); break; }
                    if(i==n) printf("Not found!\n"); } break;
            case 5: printf("Exiting...\n"); break;
        }
    } while(choice!=5);
    return 0;
}
