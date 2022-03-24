#include <stdio.h>
#include <string.h>

int palindromo(char palavra[], int tam, int posicao) {
    if (posicao < tam / 2){
        if (palavra[posicao] == palavra[tam - posicao - 1]){
            return 1 * palindromo(palavra, tam, posicao+1);
        }
        else{
            return 0;
        }
    }else{
        return 1;
    }
}

int main() {
   char palavra[100] = "uva"; //Modifique a palavra aqui
   int tam;
   tam = strlen(palavra);

   if (palindromo(palavra, tam, 0)){
        printf("eh palindromo\n");
        return 0;
    }
   else{
       printf("nao eh palindromo\n");
       return 0;
   }
   return 0;
}




/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int palindromo(char *palavra){
    char copia[100];
    int j, i, tamanho;

    fgets(palavra, 100, stdin);
    strcpy(copia, palavra);
    tamanho = strlem(palavra);
    j = tamanho - 2;
    for(i = 0 ; tamanho - 2 ; i++ ){
        if (palavra[i] != copia[j]){
            printf("Nao eh palindromo");
            return 0;
        }
        j--;
    }
    printf("eh palindromo!\n");
    return 0;
}

int main(){
    char palavra [100] = "amor";
    palindromo(palavra);

    retunr 0;
}
*/