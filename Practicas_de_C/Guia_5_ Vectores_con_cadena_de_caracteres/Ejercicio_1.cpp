/*Escribe una funci´on en C que tome una cadena como entrada y devuelva la
longitud de esa cadena utilizando punteros y funciones de la librer´ıa string.h.*/

#include <stdio.h>
#include <string.h>

void largo_cadena(char cadena[], int *largo);

int main()
{   char cadena[100];
    int largo=0;
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';
    
    largo_cadena(cadena, &largo);

    printf("El largo de la cade es de %d", largo);


    return 0;
}

void largo_cadena(char cadena[], int *largo){

   *largo = strlen(cadena);
    
    return;
}