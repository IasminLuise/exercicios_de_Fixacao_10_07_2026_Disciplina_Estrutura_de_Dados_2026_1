/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 49-----------------------*/
#include <stdio.h>

int main (){
    
    int usoRestaurante;
    int totalAlunos = 0;
    int abaixo10 = 0;
    int entre10e15 = 0;
    int acima15 = 0;
    
    while(1){
        
        printf("Digite a quantidade de vezes que utilizou o restaurante: ");
        scanf("%d", &usoRestaurante);
        
        if(usoRestaurante < 0){
            break;
        }
        
        totalAlunos++;
        
        if(usoRestaurante < 10){
            
            abaixo10++;
            
        } else if(usoRestaurante <= 15){
            
            entre10e15++;
            
        } else {
            
            acima15++;
        }
        
    }
    
    printf("Percentual abaixo de 10 vezes: %.2f%%\n",
    ((float)abaixo10 / totalAlunos) * 100);
    
    printf("Percentual entre 10 e 15 vezes: %.2f%%\n",
    ((float)entre10e15 / totalAlunos) * 100);
    
    printf("Percentual acima de 15 vezes: %.2f%%\n",
    ((float)acima15 / totalAlunos) * 100);
    
    printf("Quantidade de alunos entrevistados: %d", totalAlunos);
    
    return 0;
}
