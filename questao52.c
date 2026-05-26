/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 52-----------------------*/
#include <stdio.h>

int main (){
    
    int idade;
    int acidente;
    int totalAcidentes = 0;
    int somaIdades = 0;
    
    float salarioBruto;
    float salarioLiquido;
    float totalSalarios = 0;
    
    while(1){
        
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        printf("Digite o salário bruto: ");
        scanf("%f", &salarioBruto);
        
        if(salarioBruto < 0){
            break;
        }
        
        printf("Já sofreu acidente de trabalho? (1-SIM / 0-NÃO): ");
        scanf("%d", &acidente);
        
        if(salarioBruto > 1500){
            
            salarioLiquido = salarioBruto - (salarioBruto * 0.10);
            
        } else {
            
            salarioLiquido = salarioBruto;
        }
        
        totalSalarios = totalSalarios + salarioLiquido;
        
        if(acidente == 1){
            
            somaIdades = somaIdades + idade;
            totalAcidentes++;
        }
        
    }
    
    printf("Média de idade das pessoas com acidente: %.2f\n",
    (float)somaIdades / totalAcidentes);
    
    printf("Total de salários líquidos pagos: R$ %.2f", totalSalarios);
    
    return 0;
}
