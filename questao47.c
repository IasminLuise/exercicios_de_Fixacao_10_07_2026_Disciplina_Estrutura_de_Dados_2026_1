/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 47-----------------------*/
#include <stdio.h>

int main (){
    
    int quantidadeProdutos;
    float salarioFixo;
    float salarioFinal;
    float comissao;
    float somaSalarios = 0;
    float maiorSalarioFixo = 0;
    
    for(int i = 1; i <= 1200; i++){
        
        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &quantidadeProdutos);
        
        printf("Digite o salário fixo: ");
        scanf("%f", &salarioFixo);
        
        if(quantidadeProdutos <= 5){
            
            comissao = quantidadeProdutos * 1.50;
            
        } else if(quantidadeProdutos <= 50){
            
            comissao = quantidadeProdutos * 2.00;
            
        } else {
            
            comissao = quantidadeProdutos * 2.50;
        }
        
        salarioFinal = salarioFixo + comissao;
        
        somaSalarios = somaSalarios + salarioFinal;
        
        if(salarioFixo > maiorSalarioFixo){
            
            maiorSalarioFixo = salarioFixo;
        }
        
        printf("Salário do funcionário %d: R$ %.2f\n", i, salarioFinal);
        
    }
    
    printf("Média dos salários pagos: R$ %.2f\n", somaSalarios / 1200);
    printf("Maior salário fixo: R$ %.2f", maiorSalarioFixo);
    
    return 0;
}
