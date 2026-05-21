
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 12-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    
    printf("Digite um número par: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){       //calculo do resto da divisão do numero atribuido
        
        printf("Os próximos 10 números pares são:\n");
        
        for(int i = 1; i <= 10; i++){
            
            num = num + 2;
            
            if(i < 10){        // organizar separação por vírgula
                printf("%d, ", num);
                
            } else {         // organizar separação por ponto
                printf("%d.", num);
            }
            
        }
        
    } else {
        
        printf("O número digitado não é par.");
    }
    
    return 0;
}
