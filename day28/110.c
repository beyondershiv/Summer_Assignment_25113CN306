#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a[100];
    int n, i;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter AccNo, Name, Balance: ");
        scanf("%d %s %f", &a[i].accNo, a[i].name, &a[i].balance);
    }

    printf("\n--- Bank Accounts ---\n");
    for(i = 0; i < n; i++) {
        printf("AccNo: %d, Name: %s, Balance: %.2f\n", a[i].accNo, a[i].name, a[i].balance);
    }

    return 0;
}
