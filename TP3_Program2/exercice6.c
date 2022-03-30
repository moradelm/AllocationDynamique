#include <stdio.h>
#include <stdlib.h>
int  *alloueVecteur(int dimension, int val)
{
    int i;
    int *vecteur = (int *)malloc(dimension∗sizeof(int));
    for (i = 0; i < dimension ; i++)
    {
        vecteur[i] = val;
    }

    return vecteur;
}
void libereVecteur(int ∗vecteur)
{
    free(vecteur);
}
int main()
{
    
}
