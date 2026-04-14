#include <stdio.h>

int count();

int count(int arr[], int n)
{
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            a = a + 1;
        }
    }
    printf("No. of positive value are %d\n", a);
}
int main()
{
    int arr[6] = {-1, 2, 0, 4, 5, -6};

    count(arr, 6);

    return 0;
}