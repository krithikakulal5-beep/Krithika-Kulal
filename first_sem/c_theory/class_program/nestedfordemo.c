#include <stdio.h>
int main()
{
    for (int i = 5; i>=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("------------------\n");
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i == 5 && j == 3) || (i == 3 && j == 2))
            {
                printf(" ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    printf("-------------------\n");
    return 0;
}
