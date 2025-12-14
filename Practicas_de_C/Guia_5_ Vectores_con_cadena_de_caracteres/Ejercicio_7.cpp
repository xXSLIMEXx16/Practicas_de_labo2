/*Escribe una funci´on que tome una cadena y un car´acter como entrada, y elimine
todas las ocurrencias de ese car´acter en la cadena utilizando punteros y funciones
de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void eliminar_caracter(char cadena[], char caracter);

int main()
{
    char cadena[] = "banana";
    char caracter = 'a';

    eliminar_caracter(cadena, caracter);

    printf("%s",cadena);

    
    return 0;
}

void eliminar_caracter(char cadena[], char caracter){

    for (int i = 0; i < strlen(cadena); i++)
    {
        if (cadena[i] == caracter)
        {
            for (int j = i; j < strlen(cadena); j++)
            {
                cadena[j] = cadena[j+1];
            }
            
        }
        
    }
    
}