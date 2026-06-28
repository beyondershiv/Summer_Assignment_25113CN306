#include <stdio.h>
#include <string.h>

struct Employee {
    int empId;
    char name[50];
    char department[30];
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter EmpID, Name, Department: ");
        scanf("%d %s %s", &e[i].empId, e[i].name, e[i].department);
    }

    printf("\n--- Employee Records ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Dept: %s\n", e[i].empId, e[i].name, e[i].department);
    }

    return 0;
}
