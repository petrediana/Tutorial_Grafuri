#include <stdio.h>


void citire(FILE *f, int a[][20], int *n)
{
    rewind(f);
    int x, y, i, j;
    fscanf(f, "%d", n);

    for(i = 1; i <= (*n); i++)
        for(j = 1; j <= (*n); j++)
            a[i][j] = 0;

    //initializez matricea de adiacenta
    while(!feof(f)){
        fscanf(f, "%d %d", &x, &y);
        //printf("%d %d ", x, y);
        a[x][y] = 1;
        a[y][x] = 1;
    }
}

void DFS(int a[][20], int *vizitat, int n, int nod, int contor){
    int i;

    vizitat[nod] = contor;

    for(i = 1; i <= n; i++){
        if((a[nod][i] == 1) && (vizitat[i] == 0))
            DFS(a, vizitat, n, i, contor);
    }
}



int main() {
    FILE *f;
    f = fopen("fisier", "r");

    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    int a[20][20], n, vizitat[20], nr, i, j;
    citire(f, a, &n);

    /*printf("\n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
*/
    for(i = 1; i <= n; i++)
        vizitat[i] = 0;

   nr = 0; //Pentru fiecare nod, parcurg in adancime si caut componentele conexe
    for(i = 1; i <= n; i++){
        if(vizitat[i] == 0){
            nr++;
            DFS(a, vizitat, n, i, nr);
        }

    }

    printf("\nGraful contine %d componente conexe", nr);

    printf("\nAcestea sunt:\n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            if(vizitat[j] == i)
                printf("%d ", j);
                printf("\n");
    }


    fclose(f);
    printf("Press any key to exit..."); getchar();
    return 0;
}