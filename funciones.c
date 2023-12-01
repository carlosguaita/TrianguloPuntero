#include <stdio.h>
#include <math.h>
#include "funciones.h"

void leerPuntos(float puntos[][2], int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        printf("Ingrese el la coordenadas (x, y) de punto %d :",i);  
        scanf("%f,%f",&puntos[i][0],&puntos[i][1]);
    }
}

void calcularDistancias(float puntos[][2],float distancias[]){
        distancias[0]=sqrt(pow(puntos[0][0]-puntos[1][0],2)+pow(puntos[0][1]-puntos[1][1],2));
        distancias[1]=sqrt(pow(puntos[0][0]-puntos[2][0],2)+pow(puntos[0][1]-puntos[2][1],2));
        distancias[2]=sqrt(pow(puntos[1][0]-puntos[2][0],2)+pow(puntos[1][1]-puntos[2][1],2));
}

void calcularPerimetro(float *perimetro, float distancias[]){
    *perimetro=distancias[0]+distancias[1]+distancias[2];
    float s = *perimetro/2;

}

void calcularArea(float *perimetro, float *area, float distancias[]){
    *perimetro=distancias[0]+distancias[1]+distancias[2];
    float s = *perimetro/2;
    *area = sqrt(s*(s-distancias[0])*(s-distancias[1])*(s-distancias[2]));
}