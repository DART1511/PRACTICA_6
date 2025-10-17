#include <stdio.h>

int main()
{
    int enteroNumero;
    char caracterA = 65;               // Convierte el entero a carácter ASCII.
    double puntoFlotanteNumero;

    // Asignar valor de teclado a una variable.
    printf("Escriba un valor entero: ");
    scanf("%i", &enteroNumero);

    printf("Escriba un valor real: ");
    scanf("%lf", &puntoFlotanteNumero);

    // Imprimir valores con formato.
    printf("\nImprimiendo las variables:\n\n");
    printf("\tValor de enteroNumero = %i \n", enteroNumero);
    printf("\tValor de caracterA = %c \n", caracterA);
    printf("\tValor de puntoFlotanteNumero = %lf \n", puntoFlotanteNumero);

    printf("\n\tValor de enteroNumero en base 16 = %x \n", enteroNumero);
    printf("\tValor de caracterA en código hexadecimal = %x\n", caracterA);
    printf("\tValor de puntoFlotanteNumero = %lf\n", puntoFlotanteNumero);
    printf("\tEn notación científica = %e\n", puntoFlotanteNumero);

    return 0;
}
