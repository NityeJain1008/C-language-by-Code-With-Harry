#include <stdio.h>

void slice(char str[], int m, int n)
{
    int i = 0;
    while (m + i < n && str[m + i] != '\0')
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[] = "Harry bhai";
    slice(str, 1, 7);
    printf("%s\n", str); // Output: arry b
    return 0;
}
