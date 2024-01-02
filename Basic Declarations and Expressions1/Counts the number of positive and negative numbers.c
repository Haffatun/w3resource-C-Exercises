#include <stdio.h>
int main() {
    float numbers[5];
    int i, countp=0, countn=0;


    for(i = 0; i < 5; i++)
    {
        scanf("%f", &numbers[i]);
        if(numbers[i] > 0)
        {
            countp++;
        }
        else if(numbers[i] < 0)
        {
            countn++;
        }
    }


    printf("Number of positive numbers: %d\n", countp);
    printf("Number of negative numbers: %d\n", countn);

    return 0;
}


