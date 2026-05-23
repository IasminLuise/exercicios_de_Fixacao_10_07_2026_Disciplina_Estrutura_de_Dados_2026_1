
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 22-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    int continuar = 1;
    
    while(continuar == 1){
        
        printf("Digite um número para exibir a tabuada: ");
        scanf("%d", &num);
        
        printf("Tabuada do número %d:\n", num);
        
        for(int i = 1; i <= 10; i++){
            
            printf("%d x %d = %d\n", num, i, (num * i));
            
        }
        
        printf("Deseja continuar? (1-SIM / 0-NÃO): ");
        scanf("%d", &continuar);
        
    }
    
    return 0;
}
