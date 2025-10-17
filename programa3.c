#include <stdio.h>

int main() {
    // Declaración de variables
    int entero;
    float flotante;
    double doble;
    char caracter;

    // Asignación de variables
    entero = 14;
    flotante = 3.5f;
    doble = -6.8610;
    caracter = 'A';

    // Funciones de salida de datos en pantalla
    printf("La variable entera tiene valor: %i \n", entero);
    printf("La variable flotante tiene valor: %f \n", flotante);
    printf("La variable doble tiene valor: %lf \n", doble);
    printf("La variable caracter tiene valor: %c \n", caracter);

    printf("\nEntero como octal: %o \nComo Hexadecimal: %x \n", entero, entero);
    printf("Flotante con precisión: %.5f \n", flotante);
    printf("Doble con precisión: %5.2lf \n", doble);
    printf("Carácter como entero (código ASCII): %d \n", caracter);

    return 0;
}
