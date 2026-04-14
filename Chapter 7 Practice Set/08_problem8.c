#include <stdio.h>

int main()
{

    int arr[3][10];
    int a, b, c ;

    printf("Enter value for table 1 \n");
    scanf("%d", &a) ;

    printf("Enter value for table 2 \n");
    scanf("%d", &b) ;

    printf("Enter value for table 3 \n");
    scanf("%d", &c) ;
    
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = a * (j + 1);
        }
    }

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = b * (j + 1);
        }
    }

    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = c * (j + 1);
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