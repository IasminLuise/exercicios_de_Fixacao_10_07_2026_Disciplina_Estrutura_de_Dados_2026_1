
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 19-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    int positivos = 0;
    
    for(int i = 1; i <= 5; i++){
        
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if(num > 0){
            positivos++;
        }
        
    }
    
    printf("Quantidade de números positivos digitados: %d", positivos);
    
    return 0;
}
