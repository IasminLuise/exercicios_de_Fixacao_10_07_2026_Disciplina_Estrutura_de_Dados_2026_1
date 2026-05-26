/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 41-----------------------*/
#include <stdio.h>

int main (){
    
    int codigo;
    char nome[50];
    int carrosVendidos;
    float valorVendas;
    float salarioFixo;
    float valorCarro;
    float salarioFinal;
    
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    
    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &valorCarro);
    
    salarioFinal = salarioFixo + (carrosVendidos * valorCarro) + (valorVendas * 0.05);
    
    printf("Código do vendedor: %d\n", codigo);
    printf("Nome do vendedor: %s\n", nome);
    printf("Salário mensal: R$ %.2f", salarioFinal);
    
    return 0;
}
