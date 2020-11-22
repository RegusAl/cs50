#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = 0;
    int nr = 0;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (!(dollars > 0));
    int cents = round(dollars * 100);

    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            nr++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            nr++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            nr++;
        }
        else
        {
            cents -= 1;
            nr++;
        }
    }
    printf("%i\n", nr);
}