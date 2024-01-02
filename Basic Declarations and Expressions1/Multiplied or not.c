#include <stdio.h>
int main()
{
    int  x, y;
    scanf("%d%d", &x, &y);

    if(x > y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }

    ((y % x)== 0)? printf("Multiplied!\n") : printf("Not Multiplied!\n");

    return 0;
}
