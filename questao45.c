/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 45-----------------------*/
#include <stdio.h>

int main (){
    
    int razao;
    int primeiro;
    int ultimo;
    int soma = 0;
    
    printf("Digite a razão da PA: ");
    scanf("%d", &razao);
    
    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro);
    
    printf("Digite o último termo: ");
    scanf("%d", &ultimo);
    
    for(int i = primeiro; i <= ultimo; i = i + razao){
        
        soma = soma + i;
        
    }
    
    printf("A soma dos elementos da PA é: %d", soma);
    
    return 0;
}
