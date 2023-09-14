#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows, i, j,k;
    // scanf("%d", &rows);
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf(" \n");
    }

    return 0;
}

// int rows, i, j;
// scanf("%d", &rows);
// for (i = 0; i <= rows; i++)
// {
//     for (j = 0; j <= i; j++)
//     {
//         printf("*");
//     }
//     printf(" \n");
// }
