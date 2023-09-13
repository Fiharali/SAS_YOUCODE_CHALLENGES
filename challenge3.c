#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A, B;
     printf("entre 1ere number");
    scanf("%d", &A);
     printf("entre 2ere number");
    scanf("%d", &B);
    printf("la some ::%d \n", A + B);
    printf("la Subtraction ::%d \n", A - B);
    printf("la Multiplication ::%d \n", A * B);
    float modulus = fmod(A, B);
    printf("la Modulus :: %d\n", modulus);
    if (B != 0)
    {
        printf("la Division ::%d", A / B);
    }
    else
    {
        printf("no Division a 0");
    }

    return 0;
}