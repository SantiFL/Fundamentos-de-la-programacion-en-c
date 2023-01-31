// contador hasta que sea menor o igual a la variable pedida 
#include<stdio.h>

int main(void){
    int Variable_Pedida;
    int valor2 = 0;
    printf("ingrese un numero");
    scanf("%d",&Variable_Pedida);
while (valor2 <= Variable_Pedida)
{
    valor2++;
    printf("%d\n", valor2);
}

}