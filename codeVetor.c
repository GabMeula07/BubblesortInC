#include <stdio.h>
#include <stdbool.h>


void organizaVetor(int array[], int tamanho){
    for (int pI = 0; pI < tamanho ; pI++){
        for(int pT = pI+1; pT <= tamanho ; pT++){
            if (array[pI] > array[pT]){

                int aux = array[pI];
                array[pI] = array[pT];
                array[pT] = aux;

            }
        }
    }
}

int menor (int arr[], int size){
    int menor = arr[0];
    return menor; 
}
int maior (int arr[], int size){
    int menor = arr[size-1];
    return menor; 
}


void mostraPraMim(int arr[], int size, bool Reverso) {
    printf("[");
    
    if (!Reverso){
        for ( int i = 0 ; i < size; i ++){
            if (i == size-1){
                printf("%d", arr[i]);
                
            }
            else{
                printf("%d,", arr[i]);
            }
        }
    }
    else{
        for( int i = size-1; i >= 0; i--){
             if (i == 0){
                printf("%d", arr[i]);
                
            }
            else{
                printf("%d,", arr[i]);
            }
        }
    }

    printf("]\n");


}


void principal(){
    int vetor[10];

    for(int i = 0 ; i <10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    organizaVetor(vetor, 10);

    printf("Valor: ");
    mostraPraMim(vetor, 10, false);
    
    printf("Olha o reverse: ");
    mostraPraMim(vetor, 10, true);

    printf("O menor número foi: %d \n", menor(vetor, 10));
    printf("O menor número foi: %d \n", maior(vetor, 10));
}

int main(){

    principal();
    return 0;
}