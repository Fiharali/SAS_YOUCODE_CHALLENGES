#include <stdio.h>

int main()
{
    char nom[20], prenom[20], sexe[10] ,numero[10];
    int age;
    printf("entre votre nom ");
    scanf("%s", &nom);
    printf("entre votre prenom ");
    scanf("%s", &prenom);
    printf("entre votre sexe ");
    scanf("%s", &sexe);
    printf("entre votre age ");
    scanf("%d", &age);
    printf("entre votre numero ");
    scanf("%s", &numero);
    printf("votre nom est : %s \n  votre prenom est :  %s \n votre sexe est %s \n votre age est %d \n  votre numero %s \n ", nom, prenom, sexe, age, numero);

    return 0;
}