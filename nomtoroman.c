#include <stdio.h>

void printRoman(int num);

int main()
{
    int num;

    printf("Enter a number between 1 and 50: ");
    scanf("%d", &num);

    printf("Roman numeral equivalent: ");
    printRoman(num);

    return 0;
}

void printRoman(int num)
{
    int i, rem;
    char roman[1000];

    i = 0;

    if (num < 1 || num > 50)
    {
        printf("Invalid number!");
        return;
    }

    while (num != 0)
    {
        if (num >= 50)
        {
            roman[i++] = 'L';
            num -= 50;
        }
        else if (num >= 40)
        {
            roman[i++] = 'X';
            roman[i++] = 'L';
            num -= 40;
        }
        else if (num >= 10)
        {
            roman[i++] = 'X';
            num -= 10;
        }
        else if (num >= 9)
        {
            roman[i++] = 'I';
            roman[i++] = 'X';
            num -= 9;
        }
        else if (num >= 5)
        {
            roman[i++] = 'V';
            num -= 5;
        }
        else if (num >= 4)
        {
            roman[i++] = 'I';
            roman[i++] = 'V';
            num -= 4;
        }
        else if (num >= 1)
        {
            roman[i++] = 'I';
            num -= 1;
        }
    }

    roman[i] = '\0';
    printf("%s", roman);
}