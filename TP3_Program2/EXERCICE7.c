int **alloue matrice(int lignes, int colonnes, int val)
{
    int i, j;
    int **matrice = malloc(lignes∗sizeof(int ∗));
    for (i = 0; i < lignes; i++)
        matrice[i] = malloc(colonnes∗sizeof(int));
    for (i = 0; i < lignes; i++)
        for (j = 0; j < colonnes; j++)
            matrice[i][j] = val;
    return matrice;
}
void libereMatrice(int **matrice, int lignes)
{
    int i;
    for (i = 0; i < lignes; i++)
        free((int *)matrice[i]);
    int **alloueMatrice(int lignes, int colonnes, int val)
    {
        int i, j;
        int **matrice = malloc(lignes∗sizeof(int ∗));
        for (i = 0; i < lignes; i++)
            matrice[i] = malloc(colonnes∗sizeof(int));
        for (i = 0; i < lignes; i++)
            for (j = 0; j < colonnes; j++)
                matrice[i][j] = val;
        return matrice;
    }
    void libere matrice(int **matrice, int lignes)
    {
        int i;
        for (i = 0; i < lignes; i++)
            free((int *)matrice[i]);
    }