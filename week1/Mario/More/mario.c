#include <cs50.h>
#include <stdio.h>

void pyramid(int x);

int main(void)
{
    // ask for height and check the input
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    pyramid(height);
}

void space(int n)
{
    for (int k = 0 ; k < n ; k++)
    {
        printf(" ");
    }
}

void pyramid(int x)
{
    for (int i = 0 ; i < x ; i++)
    {
        space(x - i - 1);
        for (int j = 0 ; j <= i ; j++)
        {
            printf("#");
        }
        space(2);
        for (int j = 0 ; j <= i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
