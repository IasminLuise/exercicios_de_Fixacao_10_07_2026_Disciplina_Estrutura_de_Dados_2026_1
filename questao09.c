#include <stdio.h>
#include <math.h>

int main (){
    int num1, num2, calculo1;
    
    printf("Digite o primeiro número para ser calculado: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número para ser calculado: ");
    scanf("%d", &num2);
    
    calculo1 = (num1 % num2);   //função da biblioteca math
    
    printf("O resto da divisão dos dois números inteiros atribuídos é: %d " ,calculo1);
    
    return 0;
}
