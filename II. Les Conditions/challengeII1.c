#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, res;
    scanf("%d", &num);

    res = num % 2;
    if (res == 0)
    {
        printf("paire");
    }
    else
    {
        printf("impaire");
    }

    return 0;
}