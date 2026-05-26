
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 37-----------------------*/
#include <stdio.h>

int main (){
    
    float kmInicial;
    float kmFinal;
    float litros;
    float precoCombustivel;
    float distancia;
    float kmLitro;
    float custo;
    
    printf("Digite a quilometragem inicial: ");
    scanf("%f", &kmInicial);
    
    printf("Digite a quilometragem final: ");
    scanf("%f", &kmFinal);
    
    printf("Digite a quantidade de litros gastos: ");
    scanf("%f", &litros);
    
    printf("Digite o preço do combustível: ");
    scanf("%f", &precoCombustivel);
    
    distancia = kmFinal - kmInicial;
    
    kmLitro = distancia / litros;
    
    custo = litros * precoCombustivel;
    
    printf("Quilometragem rodada: %.2f km\n", distancia);
    printf("Consumo do veículo: %.2f km/l\n", kmLitro);
    printf("Custo da viagem: R$ %.2f", custo);
    
    return 0;
}
