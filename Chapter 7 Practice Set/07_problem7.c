#include <stdio.h>

int main()
{

    int arr[3][10];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 2 * (j + 1);
        }
    }

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 7 * (j + 1);
        }
    }

    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 9 * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}