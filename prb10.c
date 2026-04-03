#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee emp[100], temp;
    int n, i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Sort by salary (ascending)
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(emp[i].salary > emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // Display
    printf("\nSorted by Salary:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}