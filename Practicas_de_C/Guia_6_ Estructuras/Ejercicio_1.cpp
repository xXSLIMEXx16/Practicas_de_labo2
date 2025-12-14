/*Escribe un programa que solicite al usuario ingresar datos para una estructura
que represente una persona (nombre, edad, g´enero, etc.). Luego, pasa esta
estructura a una funci´on por valor que imprima los datos.*/

#include <stdio.h>
#include <string.h>
void imprimir_datos(struct persona alumno);

struct persona
{
   char nombre[50];
   int edad;
   char Genero;
   
};



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

    imprimir_datos(alumno);

    return 0;
}

void imprimir_datos(struct persona alumno){

    printf("Su nombre es: %s\n", alumno.nombre);
    printf("Su edad es: %d \n",alumno.edad);
    printf("Su genero es: %c \n",alumno.Genero);
}