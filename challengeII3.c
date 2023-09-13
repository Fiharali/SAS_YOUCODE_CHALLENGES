
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    if (A == B)
    {
        printf("%d", A + A + A);
    }
    else
    {
        printf("%d", B + A);
    }

    return 0;
}