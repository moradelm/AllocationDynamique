#include <stdio.h>
#include <stdlib.h>

void InitPaire(int dim, int tab[dim])
{
    for (int i = 0; i < dim; i++)
    {
        tab[i] = 2 * i;
    }
}

void InitImpaire(int dim, int tab[dim])
{
    for (int i = 0; i < dim; i++)
    {
        tab[i] = 2 * i + 1;
    }
}
void Affichage(int n, int *tab)
{
    for (int i = 0; i < n; i++)
        printf("%d\n", tab[i]);
}

int main()
{
    int d1, d2;
    printf("Entrer la dimension d1 de tableau d1 :");
    scanf("%d", &d1);
    printf("Entrer la dimension d2 de tableau d2 :");
    scanf("%d", &d2);
    int *t1 = (int *)malloc(d1 * sizeof(int));
    int *t2 = (int *)malloc(d2 * sizeof(int));
    if (t1 == NULL)
    {
        exit(0);
    }
    if (t1 == NULL)
    {
        exit(0);
    }
    InitPaire(d1, t1);
    InitImpaire(d2, t2);
    printf("votre tableau t1 avec ses nombres paires est :\n");
    Affichage(d1, t1);
    printf("\n");
    printf("votre tableau t1 avec ses nombres impaires est :\n");
    Affichage(d2, t2);
    printf("\n");
    int d = d1 + d2;
    int *t = (int *)malloc(d * sizeof(int));
    printf("la concatenation entre t1 et t2 est:\n");
    for (int i = 0; i < d1; i++)
    {
        t[i] = t1[i];
        for (int i = d1; i < d; i++)
        {
            t[i] = t2[i - d1];
        }
    }
    Affichage(d, t);
    free(t1);
    free(t2);
    free(t);
    return EXIT_SUCCESS;
}
