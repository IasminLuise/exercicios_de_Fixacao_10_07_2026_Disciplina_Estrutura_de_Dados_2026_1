
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 33-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    float raio;
    float area;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);
    
    printf("A área do círculo é: %.2f", area);
    
    return 0;
}
