/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 38-----------------------*/
#include <stdio.h>

int main (){
    
    char nome[50];
    int horas;
    int dependentes;
    float salarioBruto;
    float salarioLiquido;
    
    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);
    
    printf("Digite a quantidade de dependentes: ");
    scanf("%d", &dependentes);
    
    salarioBruto = (horas * 3) + (dependentes * 100);
    
    salarioLiquido = salarioBruto - (salarioBruto * 0.135);
    
    printf("Funcionário: %s\n", nome);
    printf("Salário líquido: R$ %.2f", salarioLiquido);
    
    return 0;
}
