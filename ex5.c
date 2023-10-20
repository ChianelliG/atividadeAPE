#include<stdio.h>
#include<math.h>

void calcularVolumeE(){
    float raio, PI = 3.1415;
    printf("Digite o valor do raio");
    scanf("%f", &raio);
    float volumeE = (4 * PI* pow(raio,3))/3;
}

main(){
    calcularVolumeE();
}

