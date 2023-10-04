#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *v, int n){
    int aux;

    for(int i = 1; i < n; i++){
        aux = v[i];
        j = i;
        while(j > 0 && v[j-1] > aux){
            v[j] = v[j-1]; 
            j--;
        }
        v[j] = aux;
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

    insertionSort(v, 10);

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    free(v);

    return 0;
}