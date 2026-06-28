#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter ID, Name, Age: ");
        scanf("%d %s %d", &s[i].id, s[i].name, &s[i].age);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", s[i].id, s[i].name, s[i].age);
    }

    return 0;
}
