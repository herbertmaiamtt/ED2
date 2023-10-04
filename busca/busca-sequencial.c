#include <stdio.h>
#include <stdlib.h>

int buscaSequencial(int *v, int n, int x){
    for(int i =0; i < n; i++){
        if(x == v[i]) return i;
    }
    return -1;
}

int main(){

    int n;
    int x;

    printf("Digite um inteiro para o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = (int*)malloc(n*sizeof(int));

    printf("Preencha o vetor criado:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("Valores do vetor:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    printf("\nBusque a posicao de um numero no vetor (digite o numero): ");
    scanf("%d", &x);

    printf("Posicao numero %d", buscaSequencial(v, n, x));

    free(v);

    return 0;
}