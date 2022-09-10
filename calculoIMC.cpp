#include <stdio.h>

int main () {

    float imc;

    printf("Tabela de IMC masculino\n");

    printf("Digite seu IMC: ");
    scanf("%f", &imc);

    if(imc < 11)
        printf("IMC: %.2f\tIndice de gordura de Atleta\n", imc);
    else if(imc >= 11 && imc <= 14 )
        printf("IMC: %.2f\tIndice de gordura bom\n", imc);
    else if(imc >= 14 && imc <= 21)
        printf("IMC: %.2f\tIndice de gordura normal\n", imc);
    else if(imc >= 21 && imc <= 23)
        printf("IMC: %.2f\tIndice de gordura elevado\n", imc);
    else if(imc > 23)
        printf("IMC: %.2f\tIndice de gordura alto\n", imc);

 return 0;   
}