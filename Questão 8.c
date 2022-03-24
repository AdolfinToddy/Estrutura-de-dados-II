#include <stdio.h>

int fatorialCauda(int n){
    if (n == 0 || n ==1){
        return n;
    } else{
        return n * fatorialCauda(n - 1);
    }
}

int fatorial(int n){
    int i, fat = 1;
    for (i = n; i > 1; i--){
        fat = fat * i;
    }
    return fat;
}

int main(){
    int n;
    printf("Digite o valor que deseja calcular: \n");
    scanf("%d", &n);
    printf("o fatorial de %d eh %d\n", n, fatorialCauda(n));
    printf("o fatorial de %d eh %d\n", n, fatorial(n));
}