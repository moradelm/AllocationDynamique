
#include <stdio.h>
#include <stdlib.h>
int nbr;
int i;
void trieTableau(int p[100])
{
    int j, aide;
    for (i = 0; i < nbr - 1; i++)
    {
        for (j = i + 1; j < nbr; j++)
        {
            if (p[i] > p[j])
            {
                aide = p[i];
                p[i] = p[j];
                p[j] = aide;
            }
        }
    }
    printf("l'ordre croissant du votre tableau est :\n");
    for (i = 0; i < nbr; i++)
    {
        printf("%d\n", p[i]);
    }
}
int main()
{
    printf("entrer la taille du tableau \n");
    scanf("%d", &nbr);
    int *p = (int *)malloc(nbr * sizeof(int));
    if (p == NULL)
    {
        printf(" ERREUR : probleme de memoire .");
        exit(0);
    }
    for (i = 0; i < nbr; i++)
    {
        printf("remplir le tableau\n");
        scanf("%d", &p[i]);
    }
    trieTableau(p);
}