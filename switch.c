#include<stdio.h>

int main(void){
    char operando;
    float operador1;
    float operador2;

    printf("Suma = +\n" );
     printf("Resta = -\n" );
      printf("Multiplicacion = *\n" );
       printf("Division = /\n" );
    printf("---------------------------------------------------------------\n");

        printf("Elegir una opcion\n" );

        scanf("%c",&operando); // para leer y guardar datos se usa el &
      
    switch (operando)
    {
    case '+':
        printf("ingrese el valor 1:  \n");
        scanf("%f",&operador1);
        printf("ingrese otro valor: \n");
        scanf("%f",&operador2);
        printf("El resultado de la suma es %f\n", operador1 + operador2);
        break;
    case '-':
        printf("ingrese el valor 1:  \n");
        scanf("%f",&operador1);
        printf("ingrese otro valor: \n");
        scanf("%f",&operador2);
        printf("El resultado de la suma es %f\n", operador1 - operador2);
        break;
    case '*':
        printf("ingrese el valor 1:  \n");
        scanf("%f",&operador1);
        printf("ingrese otro valor: \n");
        scanf("%f",&operador2);
        printf("El resultado de la suma es %f\n", operador1 * operador2);
        break;
    case '/':
        printf("ingrese el valor 1:  \n");
        scanf("%f",&operador1);
        printf("ingrese otro valor: \n");
        scanf("%f",&operador2);
        printf("El resultado de la suma es %f\n", operador1 / operador2);
        break;
    default:
    printf("No se reconoce el simbolo");
        break;
    }
    return 0;
 
}