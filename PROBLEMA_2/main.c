#include <stdio.h>

void functie_citire(FILE *f, int a[][20], int *n, int *m, int *x0)
{
    int x, y, i, j;

    fscanf(f, "%d %d %d", n, m, x0);

    //Initializez matricea de adiacenta cu 0
    for(i = 1; i <= (*n); i++)
        for(j = 1; j <= (*n); j++)
            a[i][j] = 0;

    //Initializez matricea de adiacenta
    for(i = 1; i <= (*m); i++){
        fscanf(f, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

}

//In vectorul coada voi retine nodurile prin care trec
void functie_DFS(int a[][20], int n, int x0, int *vizitat, int *coada, int *nr){
    int i;

    vizitat[x0] = 1;
    coada[(*nr)] = x0;
    (*nr)++;
        //printf("%d ", x0);
    for(i = 1; i <= n; i++){
        if(( a[x0][i] == 1 ) && (vizitat[i] == 0))
            functie_DFS(a, n, i, vizitat, coada, nr);
    }

}




int main() {
    FILE *f;

    f = fopen("fisier", "r");

    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    int a[20][20], n, m, i, j, x0, vizitat[20], coada[20], nr;

    functie_citire(f, a, &n, &m, &x0);

    printf("\nMatricea de adiacenta: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    } printf("\n");

    //initializez vectorul vizitat si coada cu 0
    for(i = 1; i <= n; i++) {
        vizitat[i] = 0;
        coada[i] = 0;
    }

    nr = 1;
    functie_DFS(a, n, x0, vizitat, coada, &nr);

    printf("Parcurgerea in adancime: ");
    for(i = 1; i <= n; i++)
        printf("%d ", coada[i]);


    fclose(f);
    printf("\nPress any key to continue..."); getchar();
    return 0;
}