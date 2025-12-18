/*Crea un vector de estructuras para almacenar informaci´on de m´ultiples personas.
Permite que el usuario ingrese los datos de varias personas y luego imprime la
informaci´on almacenada.*/

#include <stdio.h>
#include <string.h>

struct persona
{
   char nombre[50];
   int edad;
   char Genero;
   
};

void agregar_datos(struct persona alumno[], int *tamano);
void imprimir_datos(struct persona alumno[], int tamano);

int main()
{
    struct persona alumno[100];
    int tamano = 0;
    int seguir = 1;
    char op;

    do
    {
        agregar_datos(alumno, &tamano);
        printf("Quiere agreagar los datos de otra persona S/N: ");
        scanf(" %c",&op);

        if (op == 'n' || op == 'N')
        {
            seguir = 0;
        }
        
        getchar();
    } while (seguir);
    

    imprimir_datos(alumno, tamano);
    return 0;
}

void agregar_datos(struct persona alumno[], int *tamano){


    printf("Ingrese su nombre: ");
    fgets(alumno[*tamano].nombre, sizeof(alumno[*tamano].nombre), stdin);
    alumno[*tamano].nombre[strcspn(alumno[*tamano].nombre, "\n")] = '\0';

    

    printf("Ingrese su edad: ");
    scanf("%d",&alumno[*tamano].edad);

    printf("Ingrese su genero (F/M): ");
    scanf(" %c",&alumno[*tamano].Genero);

    *tamano += 1;
    return;
}

void imprimir_datos(struct persona alumno[], int tamano){

    for (int i = 0; i < tamano; i++)
    {
        printf("=========== PERSONA %d ===========\n",i+1);
        printf("Nombre: %s\n",alumno[i].nombre);
        printf("Edad: %d\n",alumno[i].edad);
        printf("Genero: %c\n",alumno[i].Genero);
    }
    return;
}