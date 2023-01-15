#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
    int age;
    float salary;
};

void create_employee(struct Employee *e) {
    printf("Enter id: ");
    scanf("%d", &e->id);
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter age: ");
    scanf("%d", &e->age);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
}

void read_employee(struct Employee *e) {
    printf("Id: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Age: %d\n", e->age);
    printf("Salary: %f\n", e->salary);
}

void update_employee(struct Employee *e) {
    printf("Enter new name: ");
    scanf("%s", e->name);
    printf("Enter new age: ");
    scanf("%d", &e->age);
    printf("Enter new salary: ");
    scanf("%f", &e->salary);
}

void delete_employee(struct Employee *e) {
    e->id = 0;
    strcpy(e->name, "");
    e->age = 0;
    e->salary = 0.0;
}

int main() {
    struct Employee emp;
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create_employee(&emp);
                break;
            case 2:
                read_employee(&emp);
                break;
            case 3:
                update_employee(&emp);
                break;
            case 4:
                delete_employee(&emp);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}

