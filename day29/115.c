#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;
    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Concatenate\n3. Compare\n4. Reverse\n5. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter string: "); scanf("%s", str1);
                    printf("Length = %d\n", (int)strlen(str1)); break;
            case 2: printf("Enter two strings: "); scanf("%s %s", str1, str2);
                    strcat(str1, str2); printf("Concatenated: %s\n", str1); break;
            case 3: printf("Enter two strings: "); scanf("%s %s", str1, str2);
                    if(strcmp(str1,str2)==0) printf("Equal\n");
                    else printf("Not Equal\n"); break;
            case 4: printf("Enter string: "); scanf("%s", str1);
                    strrev(str1); printf("Reversed: %s\n", str1); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice!=5);
    return 0;
}
