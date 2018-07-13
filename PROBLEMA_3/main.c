#include <stdio.h>

void functie_citire(FILE *f, int a[][20], int *n){
    int x, y, i, j;

    fscanf(f, "%d", n);
    //Initializez matricea de adiacenta cu 0
    for(i = 1; i <= (*n); i++)
        for(j = 1; j<= (*n); j++)
            a[i][j] = 0;

    //Matricea de adiacenta
    while(!feof(f)){
        fscanf(f, "%d %d", &x, &y);
        //printf("%d %d ", x, y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

}

void functie_parcurgere_DFS(int a[][20], int n, int x0, int *nr, int *vizitat){
    int i;

    vizitat[x0] = 1;
    (*nr)++;
       //printf("%d ", x0);
    for(i = 1; i <= n; i++){
        if(( a[x0][i] == 1 ) && ( vizitat[i] == 0 ))
            functie_parcurgere_DFS(a, n, i, nr, vizitat);
    }
}




int main() {
    FILE *f;
    f = fopen("fisier", "r");
    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    int a[20][20], vizitat[20], n, nr, i, j;

    functie_citire(f, a, &n);

    /*for(i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
*/
    for(i = 1; i <= n; i++)
        vizitat[i] = 0;

    nr = 0;
    functie_parcurgere_DFS(a, n, 1, &nr, vizitat);
                                                    //printf("%d ", nr);
    if(nr == n)
        printf("\nGraful ESTE conex");
    else
        printf("\nGraful NU ESTE conex");

    fclose(f);
    printf("\nPress any key to continue..."); getchar();
    return 0;
}