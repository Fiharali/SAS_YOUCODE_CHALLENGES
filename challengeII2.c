#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charr, res;
    scanf("%c", &charr);

    switch (charr)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("c'est un voyelle");
        break;
    default:
        printf("ne pas un voyelle");
        break;
    }

    return 0;
}