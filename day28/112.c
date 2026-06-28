#include <stdio.h>

struct Marksheet {
    int rollNo;
    char name[50];
    int marks[3]; // 3 subjects
    float total, percentage;
};

int main() {
    struct Marksheet m[100];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter RollNo, Name: ");
        scanf("%d %s", &m[i].rollNo, m[i].name);
        m[i].total = 0;
        for(j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &m[i].marks[j]);
            m[i].total += m[i].marks[j];
        }
        m[i].percentage = m[i].total / 3.0;
    }

    printf("\n--- Marksheet ---\n");
    for(i = 0; i < n; i++) {
        printf("RollNo: %d, Name: %s, Total: %.2f, Percentage: %.2f%%\n",
               m[i].rollNo, m[i].name, m[i].total, m[i].percentage);
    }

    return 0;
}
