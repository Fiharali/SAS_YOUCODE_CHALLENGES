#include <stdio.h>
#include <stdlib.h>

int main()

{
    char alph;
    int asc;
    scanf(" %c", &alph);

    asc = (int)alph;

    if (asc >= 65 && asc <= 90)
    {
        printf("alphabets majuscule");
    }
    else if (asc >= 97 && asc <= 122)
    {
        printf("alphabets minuscule");
    }
    else
    {
        printf(" not alphabets ");
    }

    return 0;
}