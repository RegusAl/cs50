#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int k = 0;
    if (argc == 2)
    {
        k = atoi(argv[1]);
    }
    if (k >= 26)
    {
        k %= 26;
    }
    if (argc != 2 || k <= 0)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    string plaintext = get_string("plaintext: ");

    if (argc == 2)
    {
        for (int i = 0 ,n = strlen(plaintext) ; i < n ; i++)
        {
            if (plaintext[i] >= 65 && plaintext[i] <= 90)
            {
                if (plaintext[i] + k > 90)
                {
                    plaintext[i] -= 26;
                }
                plaintext[i] += k;
            }
            else if (plaintext[i] >= 97 && plaintext[i] <=121)
            {
                if (plaintext[i] + k > 121)
                {
                    plaintext[i] -= 26;
                }
                plaintext[i] += k;
            }
        }
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}