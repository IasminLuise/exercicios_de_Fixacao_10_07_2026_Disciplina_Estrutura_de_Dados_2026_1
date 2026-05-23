
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 20-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    int pares = 0;
    int impares = 0;
    
    for(int i = 1; i <= 10; i++){
        
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if(num % 2 == 0){
            pares++;
            
        } else {
            impares++;
        }
        
    }
    
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d", impares);
    
    return 0;
}
