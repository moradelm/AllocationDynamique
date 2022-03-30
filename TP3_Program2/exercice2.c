#include <stdio.h>
int main()
{

    int tab[100];
    int taille;
    int X;
    int *p1, *p2;
    printf(" entrer la taille du tableau ");
    scanf("%d", &taille);

    /*p = tab;*/
    for (p1 = tab; p1 < (tab + taille); p1++)
    {
        printf(" Remplir l'element ");
        scanf("%d", p1);
    }
    printf(" entrer un nombre ");
    scanf("%d", &X);
    int cp = 0;
    for (p1 = p2 = tab; p1 < tab + taille; p1++)
    {
        *p2 = *p1;
        if (*p1 != X)
        {
            p2++;
        }
        else
        {
            cp++;
        }
    }
    taille = taille - cp;
    for (p1 = tab; p1 < tab + taille; p1++)
    {
        printf("%d\n", *p1);
    }
}
