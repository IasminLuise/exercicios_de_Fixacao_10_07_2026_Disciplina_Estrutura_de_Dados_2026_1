
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 17-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    float cateto1;
    float cateto2;
    float hipotenusa;
    
    printf("Digite o primeiro cateto: ");
    scanf("%f", &cateto1);
    
    printf("Digite o segundo cateto: ");
    scanf("%f", &cateto2);
    
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
    
    printf("A hipotenusa do triângulo é: %.2f", hipotenusa);
    
    return 0;
}
