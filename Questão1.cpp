#include <iostream>

using namespace std;

int main() {

    int Par, Impar, i, vetDigitado[30], vetPar[30], vetImpar[30];
    Par = 0;
    Impar = 0;

    for (i = 0; i < 30; i++) {
        
        printf("\nDigite o %d.o numero: ", i + 1);
        scanf("%d%*c", &vetDigitado[i]);

        if (vetDigitado[i] % 2 == 0) {
            vetPar[Par] = vetDigitado[i];
            Par++;
        }
        else {
            vetImpar[Impar] = vetDigitado[i];
            Impar++;
        }
    }

    printf("\nVetor Par:\n");
    for (i = 0; i < Par; i++) {
        printf("%d\n", vetPar[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < Impar; i++) {
        printf("%d\n", vetImpar[i]);
    }
    return 0;
}