#include <stdio.h>

int binomio(int n, int k){
    if (k > n){
        return 0;
    } else if (k == 0 || n == 0){
        return 1;
    } else{
       return binomio(n - 1, k - 1) + binomio(n - 1, k); 
    }
}

int main(void){
    int n, k;

    scanf("%d %d", &n, &k);
    printf(" \n resultado :  %d ", binomio(n, k));
}