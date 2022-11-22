/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
	
    int numero;
    
    printf("Digite o número:\n");
    scanf("%d", &numero);

    if(numero % 5 == 0) { 
        printf("O número digitado é divisível por 5.\n");
    } 
    else { 
        printf("O número digitado não é divisível por 5.\n");
    }
}