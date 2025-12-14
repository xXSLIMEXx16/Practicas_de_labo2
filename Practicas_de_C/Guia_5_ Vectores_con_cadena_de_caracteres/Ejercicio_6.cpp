/*Escribe una funci´on que tome una cadena y un car´acter como entrada, 
y devuelva la posici´on de la primera ocurrencia de ese car´acter en la 
cadena utilizando punteros y funciones de la librer´ıa string.h.*/

#include <stdio.h>
#include <string.h>

void buscar_caracter( char cadena[], char caracter);

int main(){   
    char cadena[] = "Hola, aca mario";
    char caracter = 'r';
    
    buscar_caracter(cadena, caracter);
    return 0;
}

void buscar_caracter( char cadena[], char caracter){

     char *p = strchr(cadena, caracter);

    if (p != NULL)
    {
        int indice = p - cadena;
        printf("El caracter '%c' esta en el indice %d\n", caracter, indice);
    }
    else
    {
        printf("El caracter '%c' no se encuentra en la cadena.", caracter);
    }
}