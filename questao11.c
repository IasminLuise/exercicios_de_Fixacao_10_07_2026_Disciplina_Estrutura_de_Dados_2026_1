
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 11-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;
    
    for(int i = 1; i <= 5; i++){
        
        printf("Digite um valor: ");
        scanf("%d", &num);
        
        if(num > 0){
            positivos++;
            
        } else if(num < 0){
            negativos++;
            
        } else {
            zeros++;
        }
        
    }
    
    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d", zeros);
    
    return 0;
}
