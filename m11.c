#include <stdio.h>

void analyzeString(char *str, int *vowels, int *consonants,
                   int *digits, int *spaces, int *special)
{
    int i = 0;

    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' ||
                str[i] == 'I' || str[i] == 'O' ||
                str[i] == 'U' || str[i] == 'a' ||
                str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            (*digits)++;
        }
        else if (str[i] == ' ')
        {
            (*spaces)++;
        }
        else
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants,
                  &digits, &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}