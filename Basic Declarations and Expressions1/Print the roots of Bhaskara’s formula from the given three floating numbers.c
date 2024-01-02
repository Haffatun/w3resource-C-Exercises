#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, m, x, y;
    scanf("%lf%lf%lf", &a, &b, &c);

    m = (b*b) - (4*(a)*(c));

    if(m > 0 && a != 0)
    {
        m = sqrt(m);
        x = (-b + m)/(2*a);
        y = (-b - m)/(2*a);
        printf("Root1 = %.5lf\n", x);
        printf("Root2 = %.5lf\n", y);
    }
    else
        printf("Impossible to find the roots.\n");


    return 0;
}
