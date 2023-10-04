#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n){
    int aux, fim, troca;
    fim = n;
    
    do{
        troca = -1;
        for(int i = 0; i < fim - 1; i++){
            // troca sempre que o elemento da esquerda for maior
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = i; // marca se houve a troca
            }
        }
        fim--;
    }while(troca != -1); // enquanto ocorrer troca
}

int buscaBinaria(int *v, int n, int x){
    int inicio, fim, meio;
    inicio = 0;
    fim = n-1;

    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(x < v[meio]) fim = meio - 1; // metade esquerda
        else{
            if(x > v[meio]) inicio = meio + 1; // metade direita
            else return meio;
        }
    }
    return -1;
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

    printf("\nVetor desordenado:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    bubbleSort(v, n);

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    printf("\nDigite um dos valores do vetor para retornar sua posicao no vetor ordenado: ");
    scanf("%d", &x);

    printf("\nPosicao do inteiro digitado: %d", buscaBinaria(v, n, x));

    free(v);


    return 0;
}