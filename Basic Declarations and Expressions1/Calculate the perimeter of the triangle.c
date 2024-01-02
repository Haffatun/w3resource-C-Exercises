#include <stdio.h>
int main()
{
    float  a, b, c, P;

    scanf("%f%f%f", &a, &b, &c);


    if(a < (b+c) && b < (a+c) && c < (b+a))
    {
        P = a+b+c;
        printf("Perimeter  = %.1f\n", P);
    }
    else
        printf("Not possible to create a triangle..!\n");

    return 0;
}
