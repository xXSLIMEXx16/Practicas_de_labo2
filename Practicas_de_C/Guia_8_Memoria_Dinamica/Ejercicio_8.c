/*Escribe un programa que defina una estructura con varios campos. Luego,
solicita al usuario el tama˜no de un vector de estas estructuras y utiliza malloc()
para asignar memoria din´amica para el vector de estructuras. Permite al usuario
ingresar datos para cada estructura del vector. Finalmente, imprime los datos
ingresados y libera la memoria asignada.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct persona {
    char nombre[50];
    int edad;
    char genero;
};

int main()
{
    struct persona *datos = NULL;
    int tamano;

    printf("Ingresa el tamaño del vector de la estructura: ");
    scanf("%d",&tamano);

    datos = malloc(tamano * sizeof(*datos));

    if (datos == NULL)
    {
           printf("Error en la asignacion de espacio...");
        return 0;
    }
    
    for (int i = 0; i < tamano; i++)
    {
       printf("======== DATOS %d ========\n",i+1);

       getchar();

       printf("Ingrese el nombre: ");
       fgets(datos[i].nombre, sizeof(datos[i].nombre), stdin);
       datos[i].nombre[strcspn(datos[i].nombre, "\n")] = '\0';

       printf("Ingrese la edad: ");
       scanf("%d",&datos[i].edad);

       getchar();
       printf("Ingrese su genero: ");
       scanf("%c",&datos[i].genero);

      
    }
    
    for (int i = 0; i < tamano; i++)
    {
        printf("======== DATOS %d ========\n",i+1);
        printf("Nombre: %s \n",datos[i].nombre);
        printf("Edad: %d \n",datos[i].edad);
        printf("Genereo: %c\n",datos[i].genero);
    }
    
    printf("Liberando memoria...");
    free(datos);
    return 0;
}
