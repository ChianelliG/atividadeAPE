#include<stdio.h>
#define TAM 5

void visualizarDados(int vetor[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\n%d", vetor[i]);
    }
}
void visualizarDados2(int vetor[5]){
    for(int i = 0; i < 5; i++){
        printf("\n%d", vetor[i]);
    }
}

void mostrarNomes(char lista[][20], int qtd){
    for(int i = 0; i < 5; i++){
        printf("\n%s", lista[i]);
    }
}

main(){
    int vet[5] = {1,2,9,8,10};
    char nomes[5][20] = {"Ana", "Pedro", "Lucas", "Luan", "Lara"};
    visualizarDados(vet, 5);
    printf("---------");
    visualizarDados2(vet);
    mostrarNomes(nomes, TAM);
}
