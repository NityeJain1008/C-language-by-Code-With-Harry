#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("nitye.txt", "a");
    int num;

    num = 345;

    fprintf(fptr, "%d", num);

    int *ptr = &num;
    printf("Address of num is %d \n", ptr);

    // printf("The value of num is %d \n", num) ;

    return 0;
}