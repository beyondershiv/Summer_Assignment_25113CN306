#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE], n=0, choice, i, val, pos;
    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Search\n5. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter value: "); scanf("%d", &val);
                    arr[n++] = val; break;
            case 2: if(n>0) { n--; printf("Deleted last element.\n"); }
                    else printf("Array empty!\n"); break;
            case 3: for(i=0;i<n;i++) printf("%d ", arr[i]); printf("\n"); break;
            case 4: printf("Enter value: "); scanf("%d", &val);
                    for(i=0;i<n;i++) if(arr[i]==val) { printf("Found at %d\n", i); break; }
                    if(i==n) printf("Not found!\n"); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice!=5);
    return 0;
}
