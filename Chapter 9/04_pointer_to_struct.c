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
    struct employee e[3];

    struct employee harry = {10, 234, "harry"} ;

    printf("Info of employe harry are %d %f %s \n",harry.code, harry.salary, harry.name);
    
    e[0].code = 45 ;
    struct employee *ptr ;
    ptr = &e[0] ;

    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code);
    return 0;
}
