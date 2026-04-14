#include <stdio.h>

int main()
{

    // int a = 3 ;
    // int b = 4 ;
    int a, b, c;
    
    printf("enter leangth\n");
    scanf("%d", &a);
    printf("enter bredth\n");
    scanf("%d", &b);

    c = a * b;

    printf("the area of the triangle is %d", c);

    return 0;
}
