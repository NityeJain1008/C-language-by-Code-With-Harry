#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int *ptr = &arr[0];

    printf("Address at index 0 is %d\n", ptr);
    printf("Vlaue at ptr is %d\n", *ptr);

    ptr = ptr + 2;

    printf("Address at index 3 is %d\n", ptr);
    printf("Vlaue at ptr is %d\n", *ptr);

    return 0;
}
