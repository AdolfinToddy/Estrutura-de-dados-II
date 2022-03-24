#include <stdio.h>
#include <stdlib.h>

trocar (int v[], int ini, int fim){
    int aux;
    if (ini < fim)
    {
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        trocar(v, ini + 1, fim -1);
    }
}

imprimir (int v[], int tam){
    if (tam == 1)
    {
        printf("%d, ", v[tam-1]);
    }else{
        imprimir(v, tam - 1);
        printf("%d, ", v[tam-1]);
    }
}

int main(){
    int vet[10] = {0, 1, 2, 3, 4, 5, 6};

    imprimir(vet, 7);
    trocar(vet, 0, 6);
    printf("\n");
    printf ("Invertido:\n" );
    imprimir (vet, 7);
    return 0;
}
