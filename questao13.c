
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 13-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Os 5 sucessores do número digitado são:\n");
    
    for(int i = 1; i <= 5; i++){
        
        if(i < 5){
            printf("%d, ", num + i);
            
        } else {
            printf("%d.", num + i);
        }
        
    }
    
    return 0;
}
