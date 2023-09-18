#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choix, conter = 0, foundD = 0, exist = 0, delteD = 0;
char donnee[];
char array[99][99];
FILE *filetxt;

void Menu()
{
    printf("======================================================\n");
    printf("                        Menu                          \n");
    printf("======================================================\n");
    printf("     [1] afficher les donnees\n");
    printf("     [2] ajouter une donnee\n");
    printf("     [3] rechercher sur une donnee\n");
    printf("     [4] supprimer une donnee\n");
    printf("     [5] supprimer les donnees repetes\n");
    printf("     [6] genere le wordlist\n");
    printf("     [7] genere le wordlist dans un fichier .txt\n");
    printf("     [8] afficher les donnees de type entier\n");
    printf("     [0] pour quitter \n");
    printf("=======================================================\n");
    printf("Tapez votre choix [0-8] : \n");
    scanf("%d", &choix);
}
void liste()
{
    if (conter == 0)
    {
        printf("est vide \n");
    }
    else
    {
        for (int i = 0; i <= conter; i++)
        {
            // printf("dj");
            printf(" %s \n", array[i]);
        }
    }
}

void add()
{
    printf(" entre la donnee  ");
    scanf("%s", &donnee);
    strcpy(array[conter], donnee);
    // array[0]=donnee;
    conter++;
}
void cherche()
{
    printf(" entre la donnee pour cherche  \n  ");
    scanf("%s", &donnee);
    // printf("fghjk %s",donnee);

    for (int i = 0; i < conter; i++)
    {
        if (strcmp(array[i], donnee) == 0)
        {
            printf(" %s  exist in position %d \n", donnee, i + 1);
            exist = 1;
            // break;
        }
    }
    if (exist == 0)
    {
        printf("not found \n ");
    }
}
void suppreme()
{
    printf(" entre la donnee pour supreme  \n  ");
    scanf("%s", &donnee);
    // printf("fghjk %s",donnee);

    for (int i = 0; i < conter; i++)
    {
        if (strcmp(array[i], donnee) == 0)
        {
            // printf(" %s  exist in index %d", donnee, i + 1);
            for (int j = i; j < conter - 1; j++)
            {
                strcpy(array[j], array[j + 1]);
                foundD == 1;
            }
        }
    }
    if (foundD == 0)
    {
        printf("not found \n ");
    }
}

void SubRepete()
{
    for (int i = 0; i < conter; i++)
    {
        for (int j = i + 1; j < conter;)
        {
            if (strcmp(array[i], array[j]) == 0)
            {
                for (int k = j; k < conter; k++)
                {
                    strcpy(array[k], array[k + 1]);
                }
                conter--;
                delteD = 1;
            }
            else
            {
                j++;
            }
        }
    }
    if (delteD == 0)
    {
        printf("no dublicate \n");
    }
    else
    {
        printf(" duplicates supreme \n");
    }
}

void generetList()
{

    if (conter == 0)
    {
        printf("la list est vide \n");
    }
    else
    {
        for (int i = 0; i < conter; i++)
        {
            printf("$&#%s@$&#", array[i]);
        }
        printf("\n");
    }
}

void createTxt()
{

    filetxt = fopen("donnees.txt", "w");

    for (int i = 0; i < conter; i++)
    {
        fprintf(filetxt, "la donnees ");
        fprintf(filetxt, "%d", i + 1);
        fprintf(filetxt, "   ====   ");
        fprintf(filetxt, array[i]);
        fprintf(filetxt, "\n");
    }

    fclose(filetxt);
}
void returnEntier()
{
    for (int i = 0; i < conter; i++)
    {

        if (atoi(array[i]))
        {
            printf("la donneee entier est %s \n", array[i]);
        }
    }
}
int main()
{

    do
    {
        Menu();
        switch (choix)
        {
        case 1:
            liste();
            break;
        case 2:
            add();
            break;
        case 3:
            cherche();
            break;
        case 4:
            suppreme();
            break;
        case 5:
            SubRepete();
            break;
        case 6:
            generetList();
            break;
        case 7:
            createTxt();
            break;
        case 8:
            returnEntier();
            break;
        case 0:
            break;
        default:
            printf("choix invalid \n");
            break;
        }
    } while (choix > 0 && choix <= 8);

    return 0;
}
