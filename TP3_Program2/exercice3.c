#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr;
    printf("entrer la taille du tableau \n");
    scanf("%d", &nbr);
    int *p = (int *)malloc(nbr * sizeof(int));
    int i;
    if (p == NULL)
    {
        printf(" ERREUR : probleme de memoire .");
        exit(0);
    }
    for (i = 0; i < nbr; i++)
    {
        printf("remplir le tableau");
        scanf("%d", &p[i]);
    }
    /* affichage de tableau */
    for (i = 0; i < nbr; i++)
    {
        printf("voici votre  tableau %d\n", p[i]);
    }
    int somme = 0;
    for (i = 0; i < nbr; i++)
    {
        somme = somme + *p;
    }
    printf("la somme est %d", &somme);
    float moyenne;
    moyenne = somme / nbr;
    printf("la moyenne de votre tableau est %f", &moyenne);

    return 0;
}