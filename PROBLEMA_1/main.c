#include <stdio.h>

void functie_citire(FILE *f, int a[][20], int *n, int *m, int *x0){
    int x, y, i, j;
        //Citesc nr de noduri, nr de muchii, si nodul de la care vreau sa fac parcurgerea
        fscanf(f, "%d %d %d", n, m, x0);

    //initializez matricea de adiacenta cu 0
    for(i = 1; i <= (*n); i++)
        for(j= 1; j<= (*n); j++)
            a[i][j] = 0;

    //matricea de adiacenta
     for(i = 1; i <= (*m); i++){
            fscanf(f, "%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
}

}

void functie_BFS(int a[][20], int n, int x0, int *vizitat, int *coada){
    int p, u, i;
    //initializez vectorii vizitat si coada cu 0
    for(i = 1; i <= n; i++){
        vizitat[i] = 0;
        coada[i] = 0;
    }

    p = u = 1;
    coada[p] = x0;
    vizitat[x0] = 1;

    while(p <= u){
        x0 = coada[p];
        p++;
        //lucrez cu matricea de adiacenta, si ma uit tot timpul daca intre nodul curent x0 si celelalte exista o muchie
        for(i = 1; i <= n; i++){
            if(( a[x0][i] == 1) &&( vizitat[i] == 0)){
                u++;
                coada[u] = i;
                vizitat[i] = 1;
            }
        }

    }
}




int main()
{
    FILE *f;
    int a[20][20],  n, m, x0, i, j, vizitat[20], coada[20];

    f = fopen("fisier.txt", "r");
    if(f == NULL){
        perror("File does not exist");
        return -1;
    }

    functie_citire(f, a, &n, &m, &x0);

    printf("\nMatricea de adiacenta: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");

    }

    functie_BFS(a, n, x0, vizitat, coada);

    printf("\nGraful parcurs in latime: ");
    for(i = 1; i <=n; i++)
        printf("%d ", coada[i]);

    fclose(f);
    printf("\nPress any key to continue..."); getchar();
    return 0;
}





/*printf("Datele de intrare: \n");
    int x, y;

    fscanf(f, "%d %d %d", &n, &m, &x0);
        printf("%d %d %d\n", n, m, x0);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            a[i][j] = 0;


    for(i = 0; i < m; i++)
    {
        fscanf(f, "%d %d", &x, &y);
            printf("%d %d \n", x, y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

    printf("\nMatricea de adiacenta: \n");
   for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
       printf("\n");

    } printf("\n");

    //BFS
    int c[101], p, u, z;

    for(i = 1; i <= n; i++){
        v[i] = 0;
        c[i] = 0;
    }

    p = u = 1;
    c[p] = x0;
    v[x0] = 1;

    while(p <= u)
    {
        x0 = c[p];
        p++;

        for(z = 1; z <= n; z++)
        {
            if(a[x0][z]==1 && v[z]==0)
            {   u++;
                c[u] = z;
                v[z] = 1;
            }
        }
    }

    printf("Rezultatul parcurgerii in latime: ");
    for(i = 1; i <= n; i++)
        printf("%d ", c[i]);
*/