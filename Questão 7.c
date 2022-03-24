#include <stdio.h>
#include <stdlib.h>

int raiz(float x, float x_zero, float e){
    if ((x_zero * x_zero) - (x * x) <= e){
        return x_zero;
    }else{
        return (x, ((x_zero * x_zero) + x) / (2 * x_zero), e);
    }
}

int main(){
    float x = 13;
    float x_zero = 3.5;
    float e = 0.001;
    raiz(x, x_zero, e);
}