#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[50];
    int n=0, choice, i;
    do {
        printf("\n--- Student Menu ---\n");
        printf("1. Add Student\n2. Display\n3. Search by Roll\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter roll name marks: ");
                    scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
                    n++; break;
            case 2: for(i=0;i<n;i++) printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks); break;
            case 3: {int r; printf("Enter roll: "); scanf("%d",&r);
                    for(i=0;i<n;i++) if(s[i].roll==r) { printf("Found: %s\n", s[i].name); break; }
                    if(i==n) printf("Not found!\n"); } break;
            case 4: printf("Exiting...\n"); break;
        }
    } while(choice!=4);
    return 0;
}
