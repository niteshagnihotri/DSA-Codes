#include <stdio.h>

struct employee
{
    char name[30];
    int empId;
    float salary;
};

int main()
{
    int n = 10, i = 0;
    struct employee emp[n];

    printf("Enter the Number of Employee : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Name :");
        scanf("%s",&(emp[i].name));
        printf("ID :");
        scanf("%d", &emp[i].empId);
        printf("Salary :");
        scanf("%f", &emp[i].salary);
    }

    printf("\n\nEmployess Details\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Employee %d\n\n", i+1);
        printf("Name: %s\n", emp[i].name);
        printf("Id: %d\n", emp[i].empId);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}