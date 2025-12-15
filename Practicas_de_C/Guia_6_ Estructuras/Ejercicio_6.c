/*Implementa un men´u de opciones que permita al usuario realizar diferentes
acciones, como agregar una persona, eliminar una persona, imprimir todas las
personas, etc*/

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
void eliminar_datos(struct persona alumno[], int *tamano);



int main()
{
    struct persona alumno[100];
    int tamano = 0;
    int seguir = 1;
    int op;
    char menu[] = "=========== Menu ===========\n"
                  "1- Registrar a una persona\n"
                  "2- Eliminar a una persona\n"
                  "3- Imprimir datos\n"
                  "4- SALIR\n"
                  "============================\n";
    do
    {
        printf("%s",menu);
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            agregar_datos(alumno, &tamano);
            break;
        case 2:
            eliminar_datos(alumno, &tamano);
            break;
        case 3:
            imprimir_datos(alumno, tamano);
            break;

        case 4:
            printf("SALIENDO...\n");
            seguir = 0;

            break;
        default:
            printf("Opcion invalida...\n");
            break;
        }

    } while (seguir);
    


    return 0;
}

void agregar_datos(struct persona alumno[], int *tamano){

    fflush(stdin);

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

    if (tamano != 0)
    {
        for (int i = 0; i < tamano; i++){
        printf("=========== PERSONA %d ===========\n",i+1);
        printf("Nombre: %s\n",alumno[i].nombre);
        printf("Edad: %d\n",alumno[i].edad);
        printf("Genero: %c\n",alumno[i].Genero);
    }
    }else
    {
        printf("No existen datos...\n");
    }
    
    
    
    return;
}

void eliminar_datos(struct persona alumno[], int *tamano){

    fflush(stdin);

    char nombre[50];
    printf("Ingrese el nombre de la persona que quiere eliminar: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")]= '\0';

    for (int i = 0; i < *tamano; i++)
    {
        if (strcmp(alumno[i].nombre, nombre) == 0)
        {
            for (int j = i; j < *tamano ; j++)
            {
                alumno[j] = alumno[ j +1];
            }
            
            printf("Datos eliminados exitosamente...\n");
            *tamano -= 1;


            return;
        }
        
    }
    printf("La persona no existe en la base de datos...\n");
    return;
}
