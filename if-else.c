#include <stdio.h>

int main(void){
    int nota = 7;

    if(nota >= 7){
        printf("El alumno paso con lo justo");
    }
    else if((nota > 7) && (nota < 9) ){
        printf("El alumno paso con mucho");
    }
    else if (nota == 10 ) {
        printf("El alumno paso con mucho");
    }
    else{
        printf("El alumno no aprueba");
    }
     return 0;
}