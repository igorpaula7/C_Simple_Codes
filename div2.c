/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	
    int numero;
    
    printf("Digite o número:\n");
    scanf("%d", &numero);

    if(numero % 2 == 0) { 
        printf("O número digitado é par.\n");
    } 
    else { 
        printf("O número digitado e ímpar.\n");
    }
}