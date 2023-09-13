#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 99 && num < 999)
    {
        int centaine = num / 100;
        int dizaine = (num - centaine * 100) / 10;
        int unite = (num - centaine * 100) - dizaine * 10;
        // printf("uni : %d",unite);
        printf("%d%d%d", unite, dizaine, centaine);
    }

    return 0;
}