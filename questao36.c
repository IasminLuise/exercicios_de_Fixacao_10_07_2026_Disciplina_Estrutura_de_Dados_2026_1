
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 36-----------------------*/
#include <stdio.h>

int main (){
    
    float largura;
    float comprimento;
    float potenciaLampada;
    float area;
    float wattsNecessarios;
    float quantidadeLampadas;
    
    printf("Digite a largura do cômodo: ");
    scanf("%f", &largura);
    
    printf("Digite o comprimento do cômodo: ");
    scanf("%f", &comprimento);
    
    printf("Digite a potência da lâmpada em watts: ");
    scanf("%f", &potenciaLampada);
    
    area = largura * comprimento;
    
    wattsNecessarios = area * 18;
    
    quantidadeLampadas = wattsNecessarios / potenciaLampada;
    
    printf("Quantidade de lâmpadas necessárias: %.2f", quantidadeLampadas);
    
    return 0;
}
