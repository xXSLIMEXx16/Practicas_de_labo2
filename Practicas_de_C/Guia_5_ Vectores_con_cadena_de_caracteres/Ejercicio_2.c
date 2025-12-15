/*Escribe una funci´on que tome dos cadenas como entrada y las concatene en una
tercera cadena utilizando punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>
void concatenar_cadenas(char cadena1[], char cadena2[], char cadena3[]);
int main()
{
    char cadena1[100];
    char cadena2[100];
    char cadena3[200];

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0'; 

    concatenar_cadenas(cadena1, cadena2, cadena3);

    printf("La cadena concatenada es: %s", cadena3);

    return 0;
}


void concatenar_cadenas(char cadena1[], char cadena2[], char cadena3[]){

    strcat(cadena3, cadena1);
    strcat(cadena3, cadena2);
    return;
}