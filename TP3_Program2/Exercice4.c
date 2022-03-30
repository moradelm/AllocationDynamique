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
        printf("remplir le tableau\n");
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
        p++;
    }
    printf("la somme est %d ", somme);
    printf("\n");
    float moyenne;
    moyenne = (float)somme / nbr;
    printf("la moyenne de votre tableau est %f\n", moyenne);
    // printf("veuiller entrer une nouvelle taille ");
    // scanf("%d", &nbr);
    char reponse;
    printf("vous voulez ajouter d'autres elements\n");
    scanf("%s", &reponse);
    int nombreElementAjouter;
    while (reponse != 'N')
    {
        printf("entrer le nombre d element a ajouter\n");
        scanf("%d", &nombreElementAjouter);
        nbr += nombreElementAjouter;
        p = realloc(p, nbr * sizeof(int));
        printf("entrer les nouveaux elements\n");
        for (i = nbr - nombreElementAjouter; i < nbr; i++)
        {
            printf("Remplir le tableau\n");
            scanf("%d", &p[i]);
            somme = somme + *p;
            p++;
        }
        float nouvelleMoyenne;
        nouvelleMoyenne = (float)somme / nbr;
        printf("la nouvelle moyenne de votre tableau est %f\n", nouvelleMoyenne);
        printf("vous voulez ajouter d'autres elements\n");
        scanf("%c", &reponse);
    }

    return 0;
}