#include <stdio.h>
int main( void){
    char caracter = 120;
    int entero = 5;
    float flotante = 23.5;
    double doble = 5.6;

    int resultado;
    double resultado2;
    double resultado3;
     
     //conversion 
    resultado = caracter/entero;
    printf("%d\n",resultado);
     
    resultado2 = flotante/doble;
    printf("%lf\n", resultado2);

    resultado3 = flotante/entero;
    printf("%lf\n", resultado3); 
     
    //consersion forzada

    int operando = 5, operando2 = 2;
    float resultado4;

    resultado4 = (float)operando/operando2;
    printf("%lf\n", (int)resultado4);

    return 0;   
}