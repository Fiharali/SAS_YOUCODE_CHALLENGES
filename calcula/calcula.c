#include <stdio.h>

int main(void)
{
    int N1, N2, choix = 0;

    do
    {

        printf("entre votre choix \n");
        printf("entre 1 pour la somme \n ");
        printf("entre 2 pour la substraction \n ");
        printf("entre 3 pour la multipliation\n ");
        printf("entre 4 pour la division \n");
        printf("entre 0 pour quitter le programe  \n");
        scanf("%d", &choix);
        if (choix == 0)
        {
            printf("au revoir \n");
            break;
        }
        else if (choix == 1 || choix == 2 || choix == 3 || choix == 4)
        {

            printf("please entry number 1 \n");
            scanf("%d", &N1);
            printf("please entry number 2 \n");
            scanf("%d", &N2);
            switch (choix)
            {
            case 1:
                printf("la somme entre %d et %d ===== %d \n", N1, N2, N1 + N2);
                break;
            case 2:
                printf("la somme entre %d et %d ===== %d \n", N1, N2, N1 - N2);
                break;
            case 3:
                printf("la somme entre %d et %d ===== %d \n", N1, N2, N1 * N2);
                break;
            case 4:
                printf("la somme entre %d et %d ===== %d \n", N1, N2, N1 / N2);
                break;
            // case 0:
            //     printf(" au revoir \n");
            //     break;
            default:
                printf("le choix ne pas valide ");
                break;
            }
        }
        else
        {
            printf("le choix ne pas valide ");
        }

    } while (1);

    return 0;
}