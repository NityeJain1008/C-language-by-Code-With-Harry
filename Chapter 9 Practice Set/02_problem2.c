#include <stdio.h>

// int sumvector(arr[a][b], arr1[a][b]);

void sumvector(int a, int b, int arr[a][b], int arr1[a][b])
{

    int arr2[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr2[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    printf("\nSum of the two arrays:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a, b ;
    
    printf("Enter the no. of rows in first and second array \n");
    scanf("%d", &a) ;

    printf("Enter the no. of columns in first and second array \n");
    scanf("%d", &b) ;


    int arr[a][b] ;
    int arr1[a][b] ;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]) ;

            printf("Enter value of arr1[%d][%d]\n", i, j);
            scanf("%d", &arr1[i][j]) ;
        }
    }

    sumvector(a, b, arr, arr1) ;
    
    
    return 0;
}
