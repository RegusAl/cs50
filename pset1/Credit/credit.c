#include <cs50.h>
#include <stdio.h>

int main()
{
    int A1 = 34, A2 = 37, M1 = 51, M2 = 52, M3 = 53, M4 = 54, M5 = 55, V = 4, nr = 0, creditor = 0;
    long card = get_long("Number: ");
    long temp = card;
    while (temp > 0)
    {
        nr++;
        temp /= 10;
    }
    if (nr == 13)
    {

        if (card / 1000000000000 == V)
        {
            creditor = 1;
        }
    }
    else if (nr == 15)
    {
        if (card / 10000000000000 == A1 || card / 10000000000000 == A2)
        {
            creditor = 2;
        }
    }
    else if (nr == 16)
    {
        if (card / 100000000000000 == M1 || card / 100000000000000 == M2 || card / 100000000000000 == M3 || card / 100000000000000 == M4
        || card / 100000000000000 == M5)
        {
            creditor = 3;
        }
        else if (card / 1000000000000000 == V)
        {
            creditor = 1;
        }
    }

    if (creditor != 0)
    {
        int tempX = 0, Last = 0, sLast = 0;
        while (card > 0)
        {
            Last += (card % 10);
            card /= 10;
            tempX = (card % 10) * 2;
            if (tempX > 9)
            {
                sLast += tempX % 10 + tempX / 10;
            }
            else
            {
                sLast += tempX;
            }
            card /= 10;
        }
        if ((Last + sLast) % 10 == 0)
        {
            if (creditor == 1)
            {
                printf("VISA\n");
            }
            else if (creditor == 2)
            {
                printf("AMEX\n");
            }
            else if (creditor == 3)
            {
                printf("MASTERCARD\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}