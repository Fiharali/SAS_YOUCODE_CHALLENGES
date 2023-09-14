#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    for (int i = 2; i < rows - 1; i++)
    {
        if (rows % i != 0)
        {
            printf("il est premier");
            break;
        }
        else
        {
            printf("non  premier");
            break;
        }
    }

    return 0;
}
