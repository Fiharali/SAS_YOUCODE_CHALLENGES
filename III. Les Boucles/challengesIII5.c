#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, div, count = 0, mod, numInv;
    printf("entre number ::   ");
    scanf("%d", &num);
    div = num;
    while (div > 10)
    {
        div = div / 10;
        count = count + 1;
    }

    printf("%d", count + 1);

    for (int i = 0; i < count + 1; i++)
    {
        mod = num % 10;
        numInv = numInv * 10 + mod;
        num = num / 10;
    }
    printf("L'inverse du numero est  %d ", numInv);

    return 0;
}
