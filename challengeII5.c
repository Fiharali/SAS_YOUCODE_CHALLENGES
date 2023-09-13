#include <stdio.h>
#include <stdlib.h>

int main()

{
    int annee;
    printf("entre l' annee");
    scanf(" %d", &annee);

    printf("mois = %d \n", annee * 12);
    printf("jours = %d  \n", annee * 12 * 30);
    printf("hours = %d  \n", annee * 12 * 30 * 24);
    printf("minutes = %d  \n", annee * 12 * 30 * 24 * 60);
    printf("Secondes = %d  \n", annee * 12 * 30 * 24 * 60 * 60);

    return 0;
}