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
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    // And so on

    struct employee harry = {10, 234, "harry"} ;

    printf("Info of employe harry are %d %f %s \n",harry.code, harry.salary, harry.name);
    
    return 0;
}