#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n=0, choice, i;
    do {
        printf("\n--- Employee Menu ---\n");
        printf("1. Add Employee\n2. Display\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: