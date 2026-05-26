/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 42-----------------------*/
#include <stdio.h>

int main (){
    
    float celsius;
    float fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("A temperatura em Fahrenheit é: %.2f", fahrenheit);
    
    return 0;
}
