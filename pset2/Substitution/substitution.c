#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char key[26], newAlph[26];

    for (int i = 0; i < 26; i++)
    {
        key[i] = toupper(argv[1][i]);
        if (key[i] >= 65 && key[i] <= 90)
        {
            newAlph[i] = 65 - key[i] + i;
        }
        else
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }

        for (int j = 0; j < i; j++)
        {
            if (key[i] == key[j])
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] >= 65 && plaintext[i] <= 90)
        {
            plaintext[i] = plaintext[i] - newAlph[plaintext[i] - 65];
        }
        else if (plaintext[i] >= 97 && plaintext[i] <= 122)
        {
            plaintext[i] = plaintext[i] - newAlph[plaintext[i] - 97];
        }
    }

    printf("ciphertext: %s\n", plaintext);
    return 0;

}