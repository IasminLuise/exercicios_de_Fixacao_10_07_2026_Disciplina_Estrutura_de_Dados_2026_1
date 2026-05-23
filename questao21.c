
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 21-----------------------*/
#include <stdio.h>

int main (){
    
    int num1;
    int num2;
    int resultado = 0;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    for(int i = 1; i <= num2; i++){
        
        resultado = resultado + num1;
        
    }
    
    printf("O produto entre os números é: %d", resultado);
    
    return 0;
}
