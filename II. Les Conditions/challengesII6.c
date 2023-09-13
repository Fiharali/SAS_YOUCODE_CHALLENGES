#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num;
    printf("entre  num");
    scanf(" %d", &num);
    if (num > 0)
    {
        printf("positif");
    }
    else if (num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("le nombre est egal à zero.");
    }

    

    return 0;
}