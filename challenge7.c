#include <stdio.h>
 
int main()
{
   int NbrInverse = 0, nbr;
 
   printf("Entrez un nombre à inverser\n");
   scanf("%d", &nbr);
 
   while (nbr != 0)
   {
      NbrInverse = NbrInverse * 10;
      NbrInverse = NbrInverse + nbr%10;
      nbr = nbr/10;
   }
 
   printf("Le nombre en sens inverse est = %d\n", NbrInverse);
 
   return 0;
}