#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_BOOKS 50

struct Student {
    int roll;
    char name[50];
};

struct Book {
    int id;
    char title[50];
    int issued; // 0 = available, 1 = issued
};

struct Student students[MAX_STUDENTS];
struct Book books[MAX_BOOKS];
int studentCount = 0, bookCount = 0;

// --- Function Prototypes ---
void addStudent();
void displayStudents();
void addBook();
void displayBooks();
void issueBook();
void returnBook();

int main() {
    int choice;
    do {
        printf("\n--- Student + Library System ---\n");
        printf("1. Add Student\n2. Display Students\n");
        printf("3. Add Book\n4. Display Books\n");
        printf("5. Issue Book\n6. Return Book\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: addBook(); break;
            case 4: displayBooks(); break;
            case 5: issueBook(); break;
            case 6: returnBook(); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 7);

    return 0;
}

// --- Function Definitions ---
void addStudent() {
    if(studentCount < MAX_STUDENTS) {
        printf("Enter roll and name: ");
        scanf("%d %s", &students[studentCount].roll, students[studentCount].name);
        studentCount++;
    } else {
        printf("Student list full!\n");
    }
}

void displayStudents() {
