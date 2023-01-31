#include<stdio.h>

int main(void){
    int i,y;
    for (i = 0; i <= 10; i++)
    {
        printf("LA TABLA DE MULTIPLICAR ES %d\n",i);
        for (y = 0; y <= 10; y++)
        {
            printf("%d X %d es igual a = %d\n",i,y,i*y);
        }
        
    }
    
}