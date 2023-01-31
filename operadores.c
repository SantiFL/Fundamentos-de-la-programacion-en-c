#include<stdio.h>

int main(void){
    int variable = 1;
        variable ++;
        variable ++;
         variable ++;
          variable ++;
           variable ++;
            variable ++;
             variable ++;
              variable ++;
               variable ++;

         variable += 10;

    printf("%d\n", variable);  

    int variable2 = 2, variable3 = 3;
    if(variable2 > variable3){
        printf("verdadero");
    }

    if((variable2 > variable3) && (variable2 > 1)){
        printf("verdadero");
    }


}