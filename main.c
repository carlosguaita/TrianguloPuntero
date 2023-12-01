#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[3][2], distancias[3];

    float perimetro1, area2;

    leerPuntos(puntos,3,2);
    calcularDistancias(puntos,distancias);
    calcularPerimetro(&perimetro1,distancias);
    calcularArea(&perimetro1,&area2,distancias);

    printf("El perimetro del triangulo es: %f\n",perimetro1);
    printf("El area del triangulo es: %f\n",area2);

    return 0;
}