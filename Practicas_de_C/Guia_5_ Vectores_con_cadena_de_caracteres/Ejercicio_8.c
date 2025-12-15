/*Escribe una funci´on que tome una cadena como entrada y cuente el n´umero de
palabras en esa cadena utilizando punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void contar_palabras(char cadena[], int *palabras);

int main()
{
    char cadena[] = "Hola todos como estan?";
    int palabras = 1;

    contar_palabras(cadena, &palabras);

    printf("La cantidad de palabras son: %d", palabras);

    
    return 0;
}


void contar_palabras(char cadena[], int *palabras){

    for (int i = 0; i < strlen(cadena); i++)
    {
        if(cadena[i] == ' ' && cadena[i+1] != ' '){
            *palabras += 1;
        }
    }
    
}