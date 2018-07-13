#include <stdio.h>

void initializare_0(int a[][20], int n)
{
    int i, j;

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

    int a[20][20], n, nr_muchii, x, y;

    fscanf(f, "%d", &n);
    initializare_0(a, n);

    nr_muchii = 0;
    while(!feof(f)){
        fscanf(f, "%d %d", &x, &y);

                if((x % 2) != (y % 2)){ // Daca NU au aceeasi paritate
                    if(a[x][y] == 0){
                        a[x][y] = 1;
                        a[y][x] = 1;
                        nr_muchii ++; //Se formeaza o muchie noua
                    }
                }
    }

    printf("\nGraful partial obtinut contine %d muchii", nr_muchii);

    fclose(f);
    printf("\nPress any key to continue..."); getchar();
    return 0;
}