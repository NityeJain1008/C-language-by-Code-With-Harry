#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Value at index %d is %d\n", i, arr[i]);
    }

    return 0;
}