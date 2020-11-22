#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask for height and check the input
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    for (int i = 0 ; i < height ; i++)
    {
        // print space
        for (int k = height - i - 2 ; k >= 0 ; k--)
        {
            printf(" ");
        }
        // print #
        for (int j = 0 ; j <= i ; j++)
        {
            printf("#");
        }
        // move one line down
        printf("\n");
    }

}