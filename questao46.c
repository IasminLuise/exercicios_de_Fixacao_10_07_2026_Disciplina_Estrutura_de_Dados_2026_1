/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 46-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    float x1;
    float y1;
    float x2;
    float y2;
    float distancia;
    
    printf("Digite o valor de X1: ");
    scanf("%f", &x1);
    
    printf("Digite o valor de Y1: ");
    scanf("%f", &y1);
    
    printf("Digite o valor de X2: ");
    scanf("%f", &x2);
    
    printf("Digite o valor de Y2: ");
    scanf("%f", &y2);
    
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("A distância euclidiana entre os pontos é: %.2f", distancia);
    
    return 0;
}
