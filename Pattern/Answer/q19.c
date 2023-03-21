#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    // upper part
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("*");
        }

        // space
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            printf(" ");
        }

        // star
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower part
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        // space
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            printf(" ");
        }

        // star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}