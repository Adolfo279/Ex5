#include <stdio.h>

int main ()
{

    float personas, alimentos, porciones;
    printf("\n\n Calderón Vazquez Adolfo Ángel");
    printf("\n\n Programa 1");
    printf("\n\n Dame el numero de personas");
    scanf("%f", &personas);
    printf("\n\n Dame el número de alimentos disponibles");
    scanf("%f", &alimentos);
    porciones = personas/alimentos;
    printf("\n La porcion para dividir equitativamente a cada persona es %f", porciones);
    return 0;
}