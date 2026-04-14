#include <stdio.h>

int arr_reverse();
int show_array();

int arr_reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int show_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    show_array(arr, 6);
    arr_reverse(arr, 6);
    show_array(arr, 6);

    return 0;
}