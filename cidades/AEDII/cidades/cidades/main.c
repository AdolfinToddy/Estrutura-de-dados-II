#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void rotas(){
    FILE *f = fopen("tourar9152.tour", "r");
    int a, b;
    fscanf(f, "%d", &a);
    fscanf(f, "%d", &b);
    while (!feof(f)){
        printf("Rotas %d %d\n", a, b);
        a = b;
        fscanf(f, "%d", &b);
    }
    fclose(f);
}

int main(){
    FILE *arquivo = fopen("ar9152.tsp", "r");
    int c;
    float la;
    float lg;
    int N = 9152;
    double cidLa[N];
    double cidLg[N];

    double *grafo;
    grafo = (double*)malloc(N*N*sizeof(double));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            grafo[i*N + j] = 0.;
        }
    }

    int k=0;

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %f %f", &c, &la, &lg);
        cidLa[k] = la;
        cidLg[k] = lg;
        k++;
    }
    fclose(arquivo);

    float distMai = 0, distMen, disMed;
    float percTotal = 0, percGrand = 1, perc;
    int dif = 0;

    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            distMen = sqrt(pow(cidLa[1], 2) + pow(cidLg[0] - cidLg[1], 2));
            grafo[i*N + j] = sqrt(pow(cidLa[i] - cidLa[j], 2) + pow(cidLg[i] - cidLg[j], 2));
            percGrand = sqrt(pow(cidLg[i] - cidLg[j], 2) + pow(cidLa[i] - cidLa[j], 2));
            if (grafo[i*N+j] != 0)
            {
                dif++;
                disMed+= grafo[i*N+j];
            }else if (grafo[i*N+j] > 0)
            {
                percGrand = grafo[i*N+j];
                percTotal+= grafo[i*N+j];
            }
            percTotal++;
            dif = (percTotal / 2);
        }
    }
    rotas();
    printf("1 - %f\n", distMen);
    printf("2 - %f\n", percGrand);
    printf("3 - %f\n", disMed);
    printf("4 - %f\n", dif);
    float visPr = (dif * 0.8);
    printf("5 - %f\n", visPr);
}
