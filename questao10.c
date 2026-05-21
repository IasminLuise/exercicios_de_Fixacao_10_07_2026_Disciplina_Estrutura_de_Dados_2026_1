#include <stdio.h>

int main (){
    
   int num1;
   int num2;
   int quociente;
    
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
    
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
    
   quociente = (num1 / num2);
    
   printf("O quociente da divisão inteira é: %d", quociente);
    
   return 0;
}
