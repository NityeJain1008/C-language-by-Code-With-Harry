#include <stdio.h>

int main()
{
    int arr[10];

    int n ; 
    printf("Enter table of which no. :\n");
    scanf("%d", &n) ;
    

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Value at index %d is %d\n", i, arr[i]);
    }

    return 0;
}