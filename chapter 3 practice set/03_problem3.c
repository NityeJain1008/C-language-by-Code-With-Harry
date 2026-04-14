// Calculate income tax paid by an employee to the government
// as per the slabs mentioned below:

// income Slab       Tax
// 2.5 – 5.0L          5%
// 5.0L - 10.0L        20%
// Above 10.0L         30%

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter your income in lakhs : \n");
    scanf("%f", &a);

    if (a <= 2.5)
    {
        printf("no tax applied");
    }
    else if (a > 2.5 && a <= 5)
    {
        b = 0.05 * a * 100000;
        printf("tax applied of 5 percent that is %f", b);
    }
    else if (a > 5 && a <= 10)
    {
        b = 0.2 * a * 100000;
        printf("tax applied of 20 percent that is %f", b);
    }
    else if (a > 10)
    {
        b = 0.3 * a * 100000;
        printf("tax applied of 30 percent that is %f", b);
    }

    return 0;
}