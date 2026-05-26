
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 32-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    float raio;
    float comprimento;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    comprimento = 2 * M_PI * raio;
    
    printf("O comprimento do círculo é: %.2f", comprimento);
    
    return 0;
}
