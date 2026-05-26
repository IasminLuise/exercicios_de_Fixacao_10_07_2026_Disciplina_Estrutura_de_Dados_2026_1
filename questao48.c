/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 48-----------------------*/
#include <stdio.h>

int main (){
    
    float H;
    float R;
    float alturaAtual;
    float distancia;
    int N;
    
    printf("Digite a altura inicial da bola: ");
    scanf("%f", &H);
    
    printf("Digite o coeficiente de salto: ");
    scanf("%f", &R);
    
    printf("Digite a quantidade de saltos: ");
    scanf("%d", &N);
    
    alturaAtual = H;
    
    distancia = H;
    
    for(int i = 1; i <= N; i++){
        
        alturaAtual = alturaAtual * R;
        
        distancia = distancia + (alturaAtual * 2);
        
    }
    
    printf("A distância percorrida pela bola é: %.2f\n", distancia);
    printf("A altura do %dº salto é: %.2f", N, alturaAtual);
    
    return 0;
}
