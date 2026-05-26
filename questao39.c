
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 39-----------------------*/
#include <stdio.h>

int main (){
    
    float custoFabrica;
    float custoConsumidor;
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);
    
    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
    
    printf("O custo ao consumidor é: R$ %.2f", custoConsumidor);
    
    return 0;
}
