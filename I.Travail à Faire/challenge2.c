#include <stdio.h>

int main()
{
    float F, C;
    printf("entre ");
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    // printf("%f", C);
    if (C < 0)
    {
        printf("tres froid");
    }
    else if (C == 0)
    {
        printf("tres froid");
    }
    else if (C < 30)
    {
        printf("chaud");
    }
    else
    {
        printf("tres chaud");
    }

    return 0;
}