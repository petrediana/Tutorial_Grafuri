#include <stdio.h>
#include <math.h>

int verificare_prim(int x) {
    int i;

    if (x < 2) return 0; // nu este prim

    for (i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0; // nu este prim
        else
            return 1; // este prim
}
//initializez matricea de adiacenta, vectorul vizitat si vectorul in care retin daca nodurile sunt prime cu 0
void initializare_0(int a[][20], int *vizitat, int n, int *prim){
    int i, j;

    for(i = 1; i <= n; i++) {
        vizitat[i] = 0;
        prim[i] = 0;
    }

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            a[i][j] = 0;
}


int main() {
    FILE *f;
    f = fopen("fisier", "r");

    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    int a[20][20], vizitat[20], i, n, prim[20];

    fscanf(f, "%d", &n);
    initializare_0(a, vizitat, n, prim);

    for(i = 1; i <= n; i++)
        if(verificare_prim(i))
            prim[i] = 1; // retin pentru fiecare nod daca este o valoare prima

    int x, y;

    while(!feof(f)){
        fscanf(f, "%d %d", &x, &y);

        if((prim[x] == 0) && (prim[y] == 0)){ // pentru fiecare pereche (x,y) neprima initializez matricea de adiacenta
            if(a[x][y]==0){
                a[x][y] = 1;
                a[y][x] = 1;
                vizitat[x]++;
                vizitat[y]++;
            }
        }
    }

    int nr;
    nr = 0;
    for(i = 1; i <= n; i++)
        nr += vizitat[i];

    printf("\nSubgraful obtinut contine %d muchii ramase", nr/2);

    fclose(f);
    printf("\nPress any key to exist..."); getchar();
    return 0;
}