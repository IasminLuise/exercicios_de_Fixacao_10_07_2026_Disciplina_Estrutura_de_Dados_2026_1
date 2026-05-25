
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 29-----------------------*/
#include <stdio.h>

int main (){
    
    int diarias;
    int hospedesMais20 = 0;
    int totalHospedes = 0;
    float valorConta;
    float desconto;
    float somaContas = 0;
    float somaDiarias = 0;
    float maiorConta = 0;
    
    while(1){
        
        printf("Digite a quantidade de diárias (0 para sair): ");
        scanf("%d", &diarias);
        
        if(diarias == 0){
            break;
        }
        
        if(diarias <= 5){
            desconto = 0.05;
            
        } else if(diarias <= 10){
            desconto = 0.10;
            
        } else {
            desconto = 0.15;
        }
        
        valorConta = (150 * diarias) - ((150 * diarias) * desconto);
        
        if(diarias > 20){
            hospedesMais20++;
        }
        
        if(valorConta > maiorConta){
            maiorConta = valorConta;
        }
        
        somaContas = somaContas + valorConta;
        somaDiarias = somaDiarias + diarias;
        totalHospedes++;
        
        printf("Valor da conta do hóspede: R$ %.2f\n", valorConta);
        
    }
    
    printf("Quantidade de hóspedes acima de 20 dias: %d\n", hospedesMais20);
    printf("Média das contas pagas: R$ %.2f\n", somaContas / totalHospedes);
    printf("Média de dias de permanência: %.2f\n", somaDiarias / totalHospedes);
    printf("Maior conta paga: R$ %.2f", maiorConta);
    
    return 0;
}
