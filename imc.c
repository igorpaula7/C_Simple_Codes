/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
int main() {
    float massa, altura, imc;

    printf("Digite seu peso (em kg) e sua altura (em metros): \n");
    scanf("%f%f", &massa, &altura);

    imc = massa / (altura * altura);

    if(imc < 20)
        printf("IMC: %f\tAbaixo do peso\n", imc);
    else if(imc >= 20 && imc < 25)
        printf("IMC: %f\tPeso normal\n", imc);
    else if(imc >= 25 && imc < 30)
        printf("IMC: %f\tSobrepeso\n", imc);
    else if(imc >= 30 && imc < 40)
        printf("IMC: %f\tObeso\n", imc);
    else
        printf("IMC: %f\tObeso Morbido\n", imc);
}