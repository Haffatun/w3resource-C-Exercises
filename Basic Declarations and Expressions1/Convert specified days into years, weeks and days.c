#include <stdio.h>

int main()
{
    int days, years, weeks;
    scanf ("%d", &days);

    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));


    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}
