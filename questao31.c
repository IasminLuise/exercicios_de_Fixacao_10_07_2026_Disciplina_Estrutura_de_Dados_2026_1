/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 31-----------------------*/
#include <stdio.h>

int main (){
    
    int anos;
    int cigarrosDia;
    int carteiras;
    float precoCarteira;
    float gastoTotal;
    
    printf("Digite a quantidade de anos fumando: ");
    scanf("%d", &anos);
    
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarrosDia);
    
    printf("Digite quantos cigarros existem em uma carteira: ");
    scanf("%d", &carteiras);
    
    printf("Digite o preço da carteira: ");
    scanf("%f", &precoCarteira);
    
    gastoTotal = ((anos * 365 * cigarrosDia) / (float)carteiras) * precoCarteira;
    
    printf("O valor gasto com cigarros foi: R$ %.2f", gastoTotal);
    
    return 0;
}
