/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 51-----------------------*/
#include <stdio.h>

int main (){
    
    int linhas;
    int colunas;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    
    if(linhas < 1){
        linhas = 1;
        
    } else if(linhas > 20){
        linhas = 20;
    }
    
    if(colunas < 1){
        colunas = 1;
        
    } else if(colunas > 20){
        colunas = 20;
    }
    
    for(int i = 1; i <= linhas; i++){
        
        for(int j = 1; j <= colunas; j++){
            
            printf("* ");
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}
