#include <stdio.h>

struct Salary {
    int empId;
    float basic, hra, da, gross;
};

int main() {
    struct Salary s[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter EmpID, Basic, HRA, DA: ");
        scanf("%d %f %f %f", &s[i].empId, &s[i].basic, &s[i].hra, &s[i].da);
        s[i].gross = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\n--- Salary Records ---\n");
    for(i = 0; i < n; i++) {
        printf("EmpID: %d, Gross Salary: %.2f\n", s[i].empId, s[i].gross);
    }

    return 0;
}
