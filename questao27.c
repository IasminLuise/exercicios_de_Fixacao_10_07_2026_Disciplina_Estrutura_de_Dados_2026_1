/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 27-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    int soma;
    int impar;
    int termos;
    
    while(1){
        
        printf("Digite um número quadrado perfeito (0 para sair): ");
        scanf("%d", &num);
        
        if(num == 0){
            break;
        }
        
        soma = 0;
        impar = 1;
        termos = 0;
        
        while(soma < num){
            
            soma = soma + impar;
            impar = impar + 2;
            termos++;
            
        }
        
        printf("A raiz quadrada de %d é: %d\n", num, termos);
        
    }
    
    return 0;
}
