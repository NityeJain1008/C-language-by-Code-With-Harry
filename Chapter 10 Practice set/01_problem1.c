#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("nitye2.txt", "r");
    int num;

    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("The number is %d\n", num);
    }

    fclose(ptr);

    return 0;
}
