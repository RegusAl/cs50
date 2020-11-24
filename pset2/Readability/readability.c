#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(void)
{
    float letters = 0, words = 0, sentences = 0;
    string text  = get_string("Text: ");
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 65 && text[i] <= 122)
        {
            letters++;
        }
        if (text[i] == 32 && (text[i - 1] != 33 && text[i - 1] != 46 && text[i - 1] != 63))
        {
            words++;
        }
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentences++;
            words++;
        }
    }
    float L = letters * 100 / words;
    float S = sentences * 100 / words;
    float index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}
