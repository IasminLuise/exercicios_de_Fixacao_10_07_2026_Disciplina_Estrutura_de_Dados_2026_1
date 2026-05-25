
/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 30-----------------------*/
#include <stdio.h>

int main (){
    
    int num;
    
    printf("Digite um número entre 0 e 9: ");
    scanf("%d", &num);
    
    printf("Tabuada do número %d:\n", num);
    
    for(int i = 1; i <= 10; i++){
        
        printf("%d x %d = %d\n", num, i, (num * i));
        
    }
    
    return 0;
}
