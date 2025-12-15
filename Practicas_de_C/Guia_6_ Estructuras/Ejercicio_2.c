/*Modifica el programa anterior para que la funci´on que imprime los datos de la
persona acepte un puntero a la estructura en lugar de la estructura misma.
*/

#include <stdio.h>
#include <string.h>

struct persona
{
   char nombre[50];
   int edad;
   char Genero;
   
};

void imprimir_datos(struct persona *alumno);

int main()
{
    struct persona alumno;

    printf("Ingrese su nombre: ");
    fgets(alumno.nombre, sizeof(alumno.nombre), stdin);
    alumno.nombre[strcspn(alumno.nombre, "\n")] = '\0';

    printf("Ingrese su edad: ");
    scanf("%d",&alumno.edad);

    printf("Ingrese su genero (F/M): ");
    scanf(" %c",&alumno.Genero);

    imprimir_datos(&alumno);

    return 0;
}

void imprimir_datos(struct persona *alumno){

    printf("Su nombre es: %s\n", (*alumno).nombre);
    printf("Su edad es: %d \n",(*alumno).edad);
    printf("Su genero es: %c \n",(*alumno).Genero);
}