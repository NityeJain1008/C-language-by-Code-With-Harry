#include <stdio.h>

int main()
{

    char str[] = {'a', 'b', 'c', '\0'};
    char str1[] = "pqr";

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", str[i]);
        // printf("%c", str1[i]);
    }

    printf("The character is %s \n", str);
    printf("The character is %s \n", str1);
    
    return 0;
}