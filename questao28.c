
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 28-----------------------*/
#include <stdio.h>

int main (){
    
    float altura;
    float somaMulheres = 0;
    float somaPopulacao = 0;
    float mediaMulheres;
    float mediaPopulacao;
    int sexo;
    int homens = 0;
    int mulheres = 0;
    int mulheresAbaixo = 0;
    
    for(int i = 1; i <= 50; i++){
        
        printf("Digite a altura: ");
        scanf("%f", &altura);
        
        printf("Digite o sexo (0-Masculino / 1-Feminino): ");
        scanf("%d", &sexo);
        
        somaPopulacao = somaPopulacao + altura;
        
        if(sexo == 0){
            homens++;
            
        } else if(sexo == 1){
            
            mulheres++;
            somaMulheres = somaMulheres + altura;
            
            if(altura < 1.65){
                mulheresAbaixo++;
            }
        }
        
    }
    
    mediaMulheres = somaMulheres / mulheres;
    mediaPopulacao = somaPopulacao / 50;
    
    printf("Média de altura das mulheres: %.2f\n", mediaMulheres);
    printf("Média de altura da população: %.2f\n", mediaPopulacao);
    printf("Percentual de homens: %.2f%%\n", ((float)homens / 50) * 100);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Percentual de mulheres abaixo de 1.65m: %.2f%%",
    ((float)mulheresAbaixo / mulheres) * 100);
    
    return 0;
}
