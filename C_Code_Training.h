#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef _C_CODE_TRAINING_H
#define _C_CODE_TRAINING_H


void linspace(int *vec, float min, float max, int nPasos);
    //Esta función llena un vector de enteros con valores entre Mínimo y Máximo linealmente espaciados
        /*
        int vec[30],i=0,nPasos = 7;
        linspace(vec, 8, 0, nPasos);

        for(;i<nPasos;i++)
            printf("%d\n",vec[i]);
        */


int linspace2(int *vec, float min, float max, int nPasos,int index);
    //Esta función llena un vector de enteros con valores entre Mínimo y Máximo linealmente espaciados desde un indice especificado previamente
    /*Ejemplo
    int vec[30], lastIndex = 0, tam = 16;
    lastIndex = linspace2(vec,0,8,8,lastIndex); //del 0 al 8 15 valores comenzando en indice 0
    printf("lastIndex = %d\n\n",lastIndex);
    lastIndex = linspace2(vec,8,0,8,lastIndex);
    int i;
    for(i = 0;i<tam;i++)
        printf("%d\n",vec[i]);
     */




int Pasos(int thetaA, int thetaB);
    //Esta función retorna el número de elementos que debe haber en un vector entre un valor y otro
    /*Ejemplo:
    int A = 0, B = 8;
    printf("Pasos = %d\n\n",Pasos(A,B));
    */

int DistMax(int a, int b, int c);
    //Retorna el mayor número entre los 3 argumentos


#endif // _C_CODE_TRAINING_H


/*
int main()
{

    //Vectores con los vertices de los dos puntos de entrenamiento
    int nVertices  = 3;
    int        nDist  = nVertices - 1;
    int  servoA[]  = {90,15,100};
    int   servoB[]  = {170,100,100};
    int   servoC[]  = {0,0,90};

    int servoTrainA[300]; //Vectores que vana  contener los grados
    int servoTrainB[300];
    int servoTrainC[300];
    int lastIndexA = 0, lastIndexB = 0, lastIndexC = 0;

    int DistanMax, i, tamTotalVec = 0;

    for(i = 0;i < nDist; i++)
    {
        //Se determina cada par de distancias para cada servo
         DistanMax = DistMax(Pasos(servoA[i],servoA[i+1]),Pasos(servoB[i],servoB[i+1]),Pasos(servoC[i],servoC[i+1]));
         tamTotalVec += DistanMax;
         lastIndexA = linspace2(servoTrainA,servoA[i],servoA[i+1],DistanMax,lastIndexA);
         lastIndexB = linspace2(servoTrainB,servoB[i],servoB[i+1],DistanMax,lastIndexB);
         lastIndexC = linspace2(servoTrainC,servoC[i],servoC[i+1],DistanMax,lastIndexC);
    }

    for(i = 0; i< 167; i++)
        printf("servoTrainA[%d] = %d\tservoTrainB[%d] = %d\tservoTrainC[%d] = %d\n",i,servoTrainA[i],i,servoTrainB[i],i,servoTrainC[i]);
    printf("Tamanio Total = %d\n",tamTotalVec);
    printf("\n\n");
    return 0;
}*/
