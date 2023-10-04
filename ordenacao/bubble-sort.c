#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n){
    int aux, fim, troca;
    fim = n;

    do{
        troca = -1;
        for(int i =0; i < fim - 1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = i;
            }
        }
        fim--;
    }while(troca != -1);
}

int main(){

    int *v = (int*)malloc(10*sizeof(int));

    v[0] = 45; v[1] = 2; v[2] = 78; v[3] = 7; v[4] = 11;
    v[5] = 20; v[6] = 2; v[7] = 35; v[8] = 3; v[9] = 41;

    printf("Vetor desordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    bubbleSort(v, 10);

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }


    return 0;
}