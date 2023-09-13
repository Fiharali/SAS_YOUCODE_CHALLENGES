#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int random = rand() % 7;
    
    printf("%d", random);

    return 0;
}