
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 23-----------------------*/
#include <stdio.h>

int main (){
    
    float altura;
    float maiorAltura = 0;
    float menorAltura = 999;
    float somaMulheres = 0;
    float mediaMulheres;
    int sexo;
    int homens = 0;
    int mulheres = 0;
    int mulheresAbaixo = 0;
    
    while(1){
        
        printf("Digite a altura: ");
        scanf("%f", &altura);
        
        if(altura <= 0){
            break;
        }
        
        printf("Digite o sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        
        if(altura > maiorAltura){
            maiorAltura = altura;
        }
        
        if(altura < menorAltura){
            menorAltura = altura;
        }
        
        if(sexo == 1){
            homens++;
            
        } else if(sexo == 2){
            
            mulheres++;
            somaMulheres = somaMulheres + altura;
            
            if(altura < 1.68){
                mulheresAbaixo++;
            }
        }
        
    }
    
    mediaMulheres = somaMulheres / mulheres;
    
    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);
    printf("Quantidade de homens: %d\n", homens);
    printf("Média de altura das mulheres: %.2f\n", mediaMulheres);
    printf("Percentual de mulheres abaixo de 1.68: %.2f%%",
    ((float)mulheresAbaixo / mulheres) * 100);
    
    return 0;
}
