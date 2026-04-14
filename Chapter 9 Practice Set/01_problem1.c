#include <stdio.h>

int main(){
    
    int arr[3][4] ;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the Vlaue of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]) ;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}