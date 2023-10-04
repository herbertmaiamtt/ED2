#include <stdio.h>
#include <stdlib.h>

int buscaOrdenada(int *v, int n, int x){
    int i = 0;    
    while(i < n && v[i] < x) i++;
    if(x==v[i]) return i;
    else return -1;
}

int main(){

    int n, x;

    printf("Digite um inteiro para o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = (int*)malloc(n*sizeof(int));

    printf("\nDigite os valores de cada posicao do vetor:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("\nDigite um dos valores do vetor para retornar sua posicao: ");
    scanf("%d", &x);

    printf("Posicao do inteiro digitado: %d", buscaOrdenada(v, n, x));

        free(v);

    return 0;
}