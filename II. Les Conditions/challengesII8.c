#include <stdio.h>
#include <stdlib.h>

int main()

{
    int moyenne;
    scanf(" %d", &moyenne);
    if (moyenne < 0 || moyenne > 20)
    {
        printf("entre un moyenne reel");
    }
    else
    {
        if (moyenne < 10)
        {
            printf("recale");
        }
        else if (moyenne < 12)
        {
            printf("passable");
        }
        else if (moyenne < 14)
        {
            printf("assez bien");
        }
        else if (moyenne < 16)
        {
            printf(" bien.");
        }
        else
        {
            printf("tres bien.");
        }
    }

    return 0;
}