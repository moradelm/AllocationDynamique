#include <stdio.h>
int main()
{
    int tab[100];
    int taille;
    int AIDE;
    printf("entrer la taille du tableau");
    scanf("%d", &taille);
    int *p, *q;
    p = tab;
    for (p = tab ; p < tab + taille; p++)
    {
        printf("Remplir l'element ");
        scanf("%d", p);
    }
    q = tab + taille - 1;
    for (p = tab, q = tab + taille -1 ; p < tab + taille / 2 , q >= tab + taille / 2 ; p++ , q--)
    {
        AIDE = *p;
        *p = *q;
        *q = AIDE;
    }
    
    printf("le tableau apres la permutaion\n");
    for (p = tab; p < tab + taille; p++)
    {
        printf("%d\n",*p);

    }
}