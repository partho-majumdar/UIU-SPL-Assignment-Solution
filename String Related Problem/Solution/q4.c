#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int space = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
    }

    int words = space + 1;

    printf("%d", words);
}

// ------------- R - 02 ------------
/*

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i, count = 0;

    // remove first space
    while (str[i] == ' ')
    {
        i++;
    }

    // Count words
    for (; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            count++;
        }
    }

    printf("%d", count + 1);
}

*/