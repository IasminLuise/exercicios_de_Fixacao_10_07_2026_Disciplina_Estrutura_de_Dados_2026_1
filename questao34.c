/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 34-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    float raio;
    float volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    
    printf("O volume da esfera é: %.2f", volume);
    
    return 0;
}
