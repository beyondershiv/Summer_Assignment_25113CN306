#include <stdio.h>

struct Ticket {
    int ticketId;
    char passenger[50];
    char destination[50];
};

int main() {
    struct Ticket t[100];
    int n, i;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter TicketID, Passenger Name, Destination: ");
        scanf("%d %s %s", &t[i].ticketId, t[i].passenger, t[i].destination);
    }

    printf("\n--- Ticket Records ---\n");
    for(i = 0; i < n; i++) {
        printf("TicketID: %d, Passenger: %s, Destination: %s\n",
               t[i].ticketId, t[i].passenger, t[i].destination);
    }

    return 0;
}
