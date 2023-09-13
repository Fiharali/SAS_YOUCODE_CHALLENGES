#include <stdio.h>

int main()
{
    char nom[20], prenom[20], sexe[10];
    int age, numero;
    printf("entre votre nom ");
    scanf("%s", &nom);
    printf("entre votre prenom ");
    scanf("%s", &prenom);
    printf("entre votre sexe ");
    scanf("%s", &sexe);
    printf("entre votre age ");
    scanf("%d", &age);
    printf("entre votre numero ");
    scanf("%d", &numero);
    printf("votre nom est : %s \n  votre prenom est :  %s \n votre sexe est %s \n votre age est %d \n  votre numero %d \n ", nom, prenom, sexe, age, numero);

    return 0;
}