#define _OPEN_SYS_ITOA_EXT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main ()
{
//variable i d'itération et nombre entré par l'utilisateur
   int i,nombre;
//variable buffer pour stockage du résultat de conversion int to string
   char buffer [sizeof(int)*8+1];
   printf ("Enter a number: ");
   if (scanf ("%d",&nombre) == 1) {
//Conversion int to string
      itoa (nombre,buffer,10);
   }

    for (i=0; i<=strlen(buffer)/2;i++ )
   {
       if(buffer[i]!=buffer[strlen(buffer)-i-1])
       {
//arrettêt de la boucle dès la premiere comparaison de deux chiffre indiquant faux palindrome
            printf("\n\n%d n'est pas un palindrome\n",nombre);
                    break;
       }
   }
// Voir si le nombre est un palindrome (exécution complète de la boucle)
   if(i==strlen(buffer)/2+1)
    printf("\n\n%d est un palindrome\n",nombre);

//Attendre 10s avant la fermeture du programme
    printf("\n\n**********    ------   **********\n\nFermeture du programme dans 10s\n");
    sleep(1);
    printf("Fermeture du programme dans 9s\n");
    sleep(1);
    printf("Fermeture du programme dans 8s\n");
    sleep(1);
    printf("Fermeture du programme dans 7s\n");
    sleep(1);
    printf("Fermeture du programme dans 6s\n");
    sleep(1);
    printf("Fermeture du programme dans 5s\n");
    sleep(1);
    printf("Fermeture du programme dans 4s\n");
    sleep(1);
    printf("Fermeture du programme dans 3s\n");
    sleep(1);
    printf("Fermeture du programme dans 2s\n");
    sleep(1);
    printf("Fermeture du programme dans 1s\n");
    sleep(1);
    printf("Fermeture du programme");
   return 0;
}
