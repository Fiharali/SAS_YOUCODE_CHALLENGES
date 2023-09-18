#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Victim
{
    char name[50];
    int age;
    char country[50];
};
void addVictim(struct Victim victims[], int *size, const char *name, int age, const char *country)
{
    if (*size < 10)
    {
        strcpy(victims[*size].name, name);
        victims[*size].age = age;
        strcpy(victims[*size].country, country);
        (*size)++;
    }
    else
    {
        printf("The array is full, cannot add more victims.\n");
    }
}
void deleteVictimByName(struct Victim victims[], int *size, const char *name)
{
    int found = 0;
    for (int i = 0; i < *size; i++)
    {
        if (strcmp(victims[i].name, name) == 0)
        {
            for (int j = i; j < *size - 1; j++)
            {
                strcpy(victims[j].name, victims[j + 1].name);
                victims[j].age = victims[j + 1].age;
                strcpy(victims[j].country, victims[j + 1].country);
            }
            (*size)--;
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Victim with the name '%s' deleted successfully.\n", name);
    }
    else
    {
        printf("No victim found with the name '%s'. Deletion failed.\n", name);
    }
}
int areVictimsDuplicate(struct Victim v1, struct Victim v2)
{
    return (strcmp(v1.name, v2.name) == 0 &&
            v1.age == v2.age &&
            strcmp(v1.country, v2.country) == 0);
}

void deleteDuplicateVictims(struct Victim victims[], int *size)
{
    int newSize = *size;
    for (int i = 0; i < newSize - 1; i++)
    {
        for (int j = i + 1; j < newSize;)
        {
            if (areVictimsDuplicate(victims[i], victims[j]))
            {
                printf("done\n");
                for (int k = j; k < newSize - 1; k++)
                {
                    strcpy(victims[k].name, victims[k + 1].name);
                    victims[k].age = victims[k + 1].age;
                    strcpy(victims[k].country, victims[k + 1].country);
                }
                newSize--;
            }
            else
            {
                j++;
            }
        }
    }

    *size = newSize;
}
int main()
{
    struct Victim victims[10];
    int choix;
    char name[50], country[50], victimNameToDelete[50];
    int age, size = 3;
    ///////////////////////////////
    strcpy(victims[0].name, "souad");
    victims[0].age = 30;
    strcpy(victims[0].country, "USA");
    ////////////////////////////////
    strcpy(victims[1].name, "ahlam");
    victims[1].age = 25;
    strcpy(victims[1].country, "Canada");
    /////////////////////////////////
    strcpy(victims[2].name, "najwa");
    victims[2].age = 28;
    strcpy(victims[2].country, "UK");
    ////////////////////////////////

    // AFFICHAGE
    printf(" ================================================================================================================= \n");
    printf("                                     Menu d'application  \n");
    printf(" ================================================================================================================= \n");
    printf("[1]afficher les donnees \n");
    printf("[2]ajouter une deonnee \n");
    printf("[3]rechecher sur une donee \n");
    printf("[4]supprimer une donnee \n");
    printf("[5]supprimer les données repetes\n");
    printf("[6]genere le wordlist \n");
    printf("[7]genere le wordlist dans un fichier .txt  // Un bonus  \n");
    printf("[8]afficher les données de type entier // Un bonus");
    printf(" ================================================================================================================= \n");
    printf("taper votre choix entre [1-8]:");
    scanf("%d", &choix);
    // LES CHOIX
    switch (choix)
    {
    case 1:
        for (int i = 0; i < size; i++)
        {
            printf("Nom de la victime : %s\n", victims[i].name);
            printf("Age de la victime : %d\n", victims[i].age);
            printf("Pays de la victime : %s\n", victims[i].country);
            printf("\n");
        };
        break;
    case 2:
        printf("Ajouter le nom de la victime.\n");
        scanf("%s", name);
        printf("Ajouter le age de victim.\n");
        scanf("%d", &age);
        printf("Ajouter le country de victim.\n");
        scanf("%s", country);
        addVictim(victims, &size, name, age, country);
        if (size > 0)
        {
            printf("Victim added successfully!\n");
            for (int i = 0; i < size; i++)
            { // Adjust the loop to iterate up to the new 'size'
                printf("Nom de la victime : %s\n", victims[i].name);
                printf("Age de la victime : %d\n", victims[i].age);
                printf("Pays de la victime : %s\n", victims[i].country);
                printf("\n");
            };
        }
        else
        {
            printf("Failed to add the victim.\n");
        }
        break;
    case 3:
        printf("Enter the name to search for: ");
        char searchName[50];
        scanf("%s", searchName);
        int found = 0;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(victims[i].name, searchName) == 0) // strcmp  it compare two string and return 0
            {
                printf("Victim found:\n");
                printf("Nom de la victime : %s\n", victims[i].name);
                printf("Age de la victime : %d\n", victims[i].age);
                printf("Pays de la victime : %s\n", victims[i].country);
                printf("\n");
                found = 1;
            }
        }
        if (!found)
        {
            printf("No victim found with the name: %s\n", searchName);
        };
        break;
    case 4:
        printf("Enter the name of the victim to delete: ");
        scanf("%s", victimNameToDelete);

        deleteVictimByName(victims, &size, victimNameToDelete);

        // Print the updated list of victims
        printf("Updated list of victims:\n");
        for (int i = 0; i < size; i++)
        {
            printf("Name: %s, Age: %d, Country: %s\n", victims[i].name, victims[i].age, victims[i].country);
        }
        break;

    case 5:
        if (0)
        {
            deleteDuplicateVictims(victims, &size);
            printf("Updated list of victims:\n");
            for (int i = 0; i < size; i++)
            {
                printf("Name: %s, Age: %d, Country: %s\n", victims[i].name, victims[i].age, victims[i].country);
            }
        }
        else
            printf("no victim duplicated");
        break;
    case 6:

        break;
    case 7:
        printf("Au revoir !\n");
       
        break;

    case 8:
        printf("Au revoir !\n");
       
        break;

    default:
        printf("Choix invalide. Veuillez choisir une option valide entre (1-8).\n");
    }
    return 0;
}
