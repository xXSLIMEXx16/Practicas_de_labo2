/*Escribe una funci´on que tome una cadena como entrada y la copie en otra cadena
utilizando punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void copiar_cadena(char cadena1[], char cadena2[]);

int main()
{
    char cadena1[100];
    char cadena2[100];

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")]='\n';
    
    copiar_cadena(cadena1, cadena2);

    printf("La cadena es: %s",cadena2);

    return 0;
}

void copiar_cadena(char cadena1[], char cadena2[]){

    strcpy(cadena2, cadena1);

}