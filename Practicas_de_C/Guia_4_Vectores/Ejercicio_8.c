/*Escribe una funci´on en C que reciba un vector y su tama˜no como argumentos
y devuelva la media de los elementos.*/

#include <stdio.h>

float calcular_media(int vector[], int tamano);

int main()
{   int vector[] = {
    3, 7, 12, 5, 9, 14, 21, 6, 8, 10,
    4, 11, 15, 2, 18, 20, 1, 13, 16, 19,
    22, 25, 17, 24, 23, 26, 28, 27, 29, 30,
    31, 33, 32, 34, 35, 36, 38, 37, 39, 40,
    41, 42, 44, 43, 45, 46, 47, 48, 49, 50
};
    int tamano = sizeof(vector)/sizeof(vector[0]);
    float media;

    media = calcular_media(vector, tamano);

    printf("La media es de %.2f",media);

    
    return 0;
}


float calcular_media(int vector[], int tamano){

    float media;
    int suma_total = 0;

    for (int i = 0; i < tamano; i++)
    {
        suma_total += vector[i];
    }
    

    return (float)suma_total / tamano;
}