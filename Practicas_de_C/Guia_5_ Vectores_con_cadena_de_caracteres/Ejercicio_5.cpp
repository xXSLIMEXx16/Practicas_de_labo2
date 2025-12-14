/*Escribe una funci´on que tome una cadena como entrada y la invierta utilizando
punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void invertir_cadena(char cadena1[], char cadena2[]);

int main()
{
    char cadena1[100];
    char cadena2[100];

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")]='\0';

    invertir_cadena(cadena1, cadena2);

    printf("La cadena invertida es: %s",cadena2);
    
    return 0;
}

void invertir_cadena(char cadena1[], char cadena2[]){

    int largo = strlen(cadena1) - 1;

    for (int i = 0; i < strlen(cadena1); i++)
    {
        cadena2[i] = cadena1[largo];
        largo--;
    }
    
    return;

}