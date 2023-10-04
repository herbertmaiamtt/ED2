#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *v, int n){
    int menor, aux;

    for(int i = 0; i < n - 1; i++){
        menor = i;
        for(int j = i+1; j < n; j++){
            if(v[j] < v[menor]) menor = j;
        }
        if(i != menor){
            aux = v[menor];
            v[menor] = v[i];
            v[i] = aux;
        }
    }
}

int main(){

    int *v = (int*)malloc(10*sizeof(int));

    v[0] = 45; v[1] = 2; v[2] = 78; v[3] = 7; v[4] = 11;
    v[5] = 20; v[6] = 2; v[7] = 35; v[8] = 3; v[9] = 41;

    printf("Vetor desordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    selectionSort(v, 10);

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    free(v);

    return 0;
}