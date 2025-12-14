/*Ampl´ıa el programa para que calcule y muestre la edad promedio de un grupo
de personas representadas por estructuras.
*/

#include <stdio.h>
#include <string.h>
void imprimir_datos(struct persona alumno[], int tamano);

struct persona
{
   char nombre[50];
   int edad;
   char Genero;
   
};

int main()
{
    struct persona alumno[5] = {
        {"Mario Arana", 24, 'M'},
        {"Sabrina Perez", 35, 'M'},
        {"Juan Suarez", 35, 'M'},
        {"Daiana", 18, 'F'},
        {"Peter Parker", 30, 'M'}
    };

    imprimir_datos(alumno, 5);
    return 0;
}

void imprimir_datos(struct persona alumno[], int tamano){

    for (int i = 0; i < tamano; i++)
    {
        printf("=========== PERSONA %d ===========\n",i+1);
        printf("Nombre: %s\n",alumno[i].nombre);
        printf("Edad: %d\n",alumno[i].edad);
        printf("Genero: %c\n",alumno[i].Genero);
    }
    
}