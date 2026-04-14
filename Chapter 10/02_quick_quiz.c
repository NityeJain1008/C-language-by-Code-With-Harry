#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("nitye2.txt", "r");
    int num;

    if (ptr == NULL)
    {
        printf("File does not exist  \n");
    }
    else
    {
        int num;

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
    }

    fclose(ptr);
    return 0;
}