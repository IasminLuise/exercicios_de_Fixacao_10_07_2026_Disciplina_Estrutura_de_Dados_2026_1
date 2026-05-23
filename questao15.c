/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 15-----------------------*/
#include <stdio.h>

int main (){
    
    float nota;
    float soma = 0;
    float media;
    
    for(int i = 1; i <= 5; i++){
        
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        
        soma = soma + nota;
        
    }
    
    media = soma / 5;
    
    printf("A média aritmética das notas é: %.2f", media);
    
    return 0;
}
