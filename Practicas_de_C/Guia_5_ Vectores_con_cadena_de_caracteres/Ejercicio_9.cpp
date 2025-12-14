/*Escribe una funci´on que tome una cadena como entrada y convierta todas las
letras may´usculas en min´usculas, y todas las letras min´usculas en may´usculas
utilizando punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void cambiar_letras(char cadena[]);
int main()
{
    char cadena[] = "Hola tOOdos como estan?";
    cambiar_letras(cadena);

    printf("La cadena modificada es: %s",cadena);

    return 0;
}


void cambiar_letras(char cadena[]){

    for (int i = 0; i < strlen(cadena); i++)
    {
        if (cadena[i] >= 'a' && cadena[i] <= 'z')
        {
            cadena[i] -= 32;
        }else if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            cadena[i] += 32;
        }   
    }
    return;
}