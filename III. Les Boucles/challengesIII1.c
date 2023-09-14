#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", a, i, a * i);
    }

    return 0;
}