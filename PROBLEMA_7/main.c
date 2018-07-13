#include <stdio.h>

void functie_citire(FILE *f, int a[][20], int *n, int *m, int *p)
{
    int i, j, x, y;

    fscanf(f, "%d %d", n, m); // citesc nr de noduri si muchii

    //initializez matricea de adiacenta cu 0
    for(i = 1; i <= (*n); i++)
        for(j = 1; j <= (*n); j++)
            a[i][j] = 0;

    //creez matricea de adiacenta
    for(i = 1; i <= (*m); i++){
        fscanf(f, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }
    fscanf(f, "%d", p); // citesc nodul din care vreau sa plec
}

void functie_afisare(int x, int *vizitat) // functia cu care afisez ciclul
{
    int y;
    y = vizitat[x];

    printf("\n%d ", x);

    while(y != x){
        printf("%d ", y);
        y = vizitat[y];
    }
    printf("%d ", y);
}

void functie_parcurgere_DFS(int n, int nod, int a[][20], int *vizitat)
{
    int i;

    for(i = 1; i <= n; i++){
        if((a[nod][i] == 1) && (vizitat[i] == 0)){
            vizitat[i] = nod;
            a[nod][i] = 0; // "alterez" matricea de adiacenta pentru a scoate muchiile deja parcurse
            a[i][nod] = 0;
            functie_parcurgere_DFS(n, i, a, vizitat);
            a[nod][i] = 1;
            a[i][nod] = 1; // aduc matricea de adiacenta la normal dupa ce parcurgerea va fi finalizata
        }
    }
}


int main() {
    FILE *f;
    f = fopen("fisier", "r");

    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    int a[20][20], n, m, p, vizitat[20], i;


    functie_citire(f, a, &n, &m, &p);

    /*for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
*/

    for(i = 1; i <= n; i++)
        vizitat[i] = 0;

    functie_parcurgere_DFS(n, p, a, vizitat);

    if(vizitat[p] == 0) // daca nodul p a fost vizitat atunci inseamna ca am putut forma un ciclu
        printf("\nNu se poate gasi un ciclu");
    else
    {
        printf("\nCiclul plecand din nodul %d este: ", p);
        functie_afisare(p, vizitat);
    }

    fclose(f);
    printf("\nPress any key to continue..."); getchar();
    return 0;
}