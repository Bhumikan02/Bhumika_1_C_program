#include <stdio.h>

struct Employee {
    char name[100];
    float salary;
};

int main() {
    int n, i;
    float totalSalary = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for(i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", employees[i].name);

        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);

        totalSalary += employees[i].salary;
    }

    float averageSalary = totalSalary / n;
    printf("Average salary of employees: %.2f\n", averageSalary);

    return 0;
}
