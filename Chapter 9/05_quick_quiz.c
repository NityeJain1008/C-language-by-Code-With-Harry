#include <stdio.h>
#include <string.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
};

void show(struct employee e);

void show(struct employee e){
    printf("The code of employee is %d\n", e.code);
    printf("The salary of employee is %f\n", e.salary);
    printf("The name of employee is %s\n", e.name);
}

int main(){
    
    struct employee e ;

    printf("Enter the name of the employee\n");
    scanf("%s", &e.name) ;
    
    printf("Enter the salary of the employee\n");
    scanf("%f", &e.salary) ;

    printf("Enter the code of the employee\n");
    scanf("%d", &e.code) ;
    
    
    show(e) ;
    
    return 0;

}