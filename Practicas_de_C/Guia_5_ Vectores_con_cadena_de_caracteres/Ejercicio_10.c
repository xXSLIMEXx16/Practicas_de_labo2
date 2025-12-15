/*Escribe una funci´on que tome una cadena como entrada y elimine todos los
espacios en blanco de esa cadena utilizando punteros y funciones de la librer´ıa
string.h.
*/

#include <stdio.h>
#include <string.h>

void sacar_espacios(char cadena[]);
int main()
{
    char cadena[] = "Hola tOOdos como estan?";
    sacar_espacios(cadena);

    printf("La cadena modificada es: %s",cadena);

    return 0;
}


void sacar_espacios(char cadena[]){

    for (int i = 0; i < strlen(cadena); i++)
    {
        if (cadena[i] == ' ' )
        {
            for (int j = i; j < strlen(cadena); j++)
            {
               cadena[j] = cadena[j + 1];
            }
            
        }   
    }
    return;
}