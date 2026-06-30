#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Item inv[50];
    int n=0, choice, i;
    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter id name qty price: ");
                    scanf("%d %s %d %f", &inv[n].id, inv[n].name, &inv[n].qty, &inv[n].price);
                    n++; break;
            case 2: for(i=0;i<n;i++) printf("%d %s %d %.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price); break;
            case 3: {int id; printf("Enter id: "); scanf("%d",&id);
                    for(i=0;i<n;i++) if(inv[i].id==id) { printf("Found: %s\n", inv[i].name); break; }
                    if(i==n) printf("Not found!\n"); } break;
            case 4: printf("Exiting...\n"); break;
        }
    } while(choice!=4);
    return 0;
}
