#include <stdio.h>
#include <stdlib.h>

int main()

{
    char charr;
    int asc;

    scanf(" %c", &charr);

    asc = (int)charr;

    if (asc >= 65 && asc <= 90)
    {
        printf("alphabet majuscule");
    }
    else
    {
        printf("alphabet miniscule");
    }

    return 0;
}