#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, res = 0;

    do
    {
        scanf("%d", &num);
        if (num < 100)
        {
            if (num != 0)
            {

                res = res + num;
            }
            else
            {
                printf("%d", res);
                break;
            }
        }

    } while (1);

    return 0;
}
