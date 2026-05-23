
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 25-----------------------*/
#include <stdio.h>

int main (){
    
    float largura;
    float comprimento;
    float area;
    float areaTotal = 0;
    int continuar = 1;
    
    while(continuar == 1){
        
        printf("Digite a largura do cômodo: ");
        scanf("%f", &largura);
        
        printf("Digite o comprimento do cômodo: ");
        scanf("%f", &comprimento);
        
        area = largura * comprimento;
        
        areaTotal = areaTotal + area;
        
        printf("Deseja adicionar outro cômodo? (1-SIM / 0-NÃO): ");
        scanf("%d", &continuar);
        
    }
    
    printf("A área total da residência é: %.2f m²", areaTotal);
    
    return 0;
}
