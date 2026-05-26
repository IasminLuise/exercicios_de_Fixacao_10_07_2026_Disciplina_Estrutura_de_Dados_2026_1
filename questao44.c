/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 44-----------------------*/
#include <stdio.h>

int main (){
    
    float fahrenheit;
    
    printf("ESCALA CELSIUS -> FAHRENHEIT\n");
    
    for(int celsius = 0; celsius <= 50; celsius = celsius + 10){
        
        fahrenheit = (celsius * 9 / 5.0) + 32;
        
        printf("%d°C = %.2f°F\n", celsius, fahrenheit);
        
    }
    
    return 0;
}
