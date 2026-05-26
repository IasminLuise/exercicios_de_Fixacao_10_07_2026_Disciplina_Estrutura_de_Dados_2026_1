/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 40-----------------------*/
#include <stdio.h>
#include <math.h>

int main (){
    
    int A;
    int B;
    int C;
    float R;
    float S;
    float D;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    R = pow((A + B), 2);
    
    S = pow((B + C), 2);
    
    D = (R + S) / 2;
    
    printf("O valor de D é: %.2f", D);
    
    return 0;
}
