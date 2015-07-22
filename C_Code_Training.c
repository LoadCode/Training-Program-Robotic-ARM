#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "C_Code_Training.h"

void linspace(int *vec, float min, float max, int nPasos)
{
    //Esta función llena un vector de enteros con valores entre Mínimo y Máximo linealmente espaciados
        if(nPasos == 1)
            nPasos = 2;

        float paso = (max-min)/(nPasos-1), acu = min;  //Se obtiene el valor del paso adecuado para cumplir con los requisitos del vector
        int i = 0;
        for(; i< nPasos; i++,acu+=paso)
             vec[i] = round(acu);
}

int linspace2(int *vec, float min, float max, int nPasos,int index)
{
    //Esta función llena un vector de enteros con valores entre Mínimo y Máximo linealmente espaciados desde un indice especificado previamente

        if(nPasos == 1)
            nPasos = 2;

        float paso = (max-min)/(nPasos-1), acu = min;  //Se obtiene el valor del paso adecuado para cumplir con los requisitos del vector
        int i = 0;
        for(; i< nPasos; i++,acu+=paso)
            vec[index+i] = round(acu);
        //printf("vec[%d] = %d\n",i+index,vec[i+index]);
        return index+i;
}

int Pasos(int thetaA, int thetaB)
{
    //Esta función retorna el número de elementos que debe haber en un vector entre un valor y otro
    if(thetaA == thetaB)
        return abs(thetaA-thetaB);
    else
        return abs(thetaA-thetaB)+1;
}

int DistMax(int a, int b, int c)
{
    //Retorna el mayor número entre los 3 argumentos
    if(a>=b && a>= c)
            return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

