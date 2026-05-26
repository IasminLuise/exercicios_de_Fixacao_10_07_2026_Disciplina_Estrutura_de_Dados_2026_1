/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 50-----------------------*/
#include <stdio.h>

int main (){
    
    int numeroSecreto;
    int tentativa;
    
    printf("Jogador 1 - Digite o número secreto entre 1 e 10: ");
    scanf("%d", &numeroSecreto);
    
    for(int i = 1; i <= 4; i++){
        
        printf("Jogador 2 - Digite sua tentativa: ");
        scanf("%d", &tentativa);
        
        if(tentativa == numeroSecreto){
            
            printf("Número acertado na tentativa %d!", i);
            
            return 0;
        }
        
    }
    
    printf("O jogador não acertou o número.");
    
    return 0;
}
