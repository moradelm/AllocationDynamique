#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d1, d2;
    int i;
    printf("veuiller entrer la dimension d1\n");
    scanf("%d", &d1);
    int *t1 = (int *)malloc(d1 * sizeof(int));
    if (t1 == NULL)
    {
        exit(0);
    }
    for (i = 0; i < d1; i++)
    {
        t1[i] = 2 * i;
    }
    printf("votre tableau 1 avec ses nombres paires\n");
    for (i = 0; i < d1; i++)
    {
        printf("%d\n", t1[i]);
    }
    printf("veuiller entrer la dimension d2\n");
    scanf("%d", &d2);
    int *t2 = (int *)malloc(d2 * sizeof(int));
    if (t2 == NULL)
    {
        exit(0);
    }
    for (i = 0; i < d2; i++)
    {
        t2[i] = 2 * i + 1;
    }
    printf("votre tableau 2 avec ses nombres impaires\n");
    for (i = 0; i < d2; i++)
    {
        printf("%d\n", t2[i]);
    }
    int d = d1 + d2;
    int *t = (int *)malloc(d * sizeof(int));
    printf("la concatenation des deux tableaux\n");
    for (i = 0; i < d1; i++)
    {
        t[i] = t1[i];
        for (int i = d1; i < d; i++)
        {
            t[i] = t2[i - d1];
        }
    }
    printf("l'affichage de concatenation\n");
    for (i = 0; i < d; i++)
    {
        printf("%d\n", t[i]);
    }
}