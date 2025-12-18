/*Escribe un programa que defina una estructura que contenga datos relevantes.
Luego, utiliza malloc() para asignar memoria din´amica para una variable de
esta estructura y permite al usuario ingresar datos para la estructura. Finalmente, 
imprime los datos ingresados y libera la memoria asignada.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
    char nombre[50];
    int edad;
    char genero;
};

int main()
{
    struct persona *p;

    
    p = malloc(sizeof(struct persona));
    if (p == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

   
    printf("Ingrese el nombre: ");
    fgets(p->nombre, 50, stdin);
    p->nombre[strcspn(p->nombre, "\n")] = '\0';

    printf("Ingrese la edad: ");
    scanf("%d", &p->edad);
    getchar();

    printf("Ingrese el genero (M/F): ");
    scanf("%c", &p->genero);


    printf("\n--- DATOS INGRESADOS ---\n");
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %d\n", p->edad);
    printf("Genero: %c\n", p->genero);


    free(p);

    return 0;
}
