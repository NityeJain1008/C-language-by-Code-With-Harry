#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];

}; // semicolon is important

int main()
{
    struct employee e[3]; // creating a structure variable

    for (int i = 1; i < 4; i++)
    {
        printf("Enter the names of the employee %d:\n", i);
        scanf("%s", &e[i].name);
    }

    for (int i = 1; i < 4; i++)
    {
        printf("Enter the salary of the employee %d:\n", i);
        scanf("%f", &e[i].salary);
    }

    for (int i = 1; i < 4; i++)
    {
        printf("Enter the code of the employee %d:\n", i);
        scanf("%d", &e[i].code);
    }

    for (int i = 1; i < 4; i++)
    {
        printf("The names of emplyee %d is %s\n", i, e[i].name);
    }

    for (int i = 1; i < 4; i++)
    {
        printf("The salary of emplyee %d is %f\n", i, e[i].salary);
    }

    for (int i = 1; i < 4; i++)
    {
        printf("The code of emplyee %d is %d\n", i, e[i].code);
    }


    // struct employee e[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter the name of employee %d:\n", i + 1);
    //     scanf("%s", e[i].name);
    //     printf("Enter the salary of employee %d:\n", i + 1);
    //     scanf("%f", &e[i].salary);
    //     printf("Enter the code of employee %d:\n", i + 1);
    //     scanf("%d", &e[i].code);
    // }

    // printf("\n--- Employee Details ---\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Employee %d: %s, %.2f, %d\n",
    //     i + 1, e[i].name, e[i].salary, e[i].code);
    // }

    return 0;
}