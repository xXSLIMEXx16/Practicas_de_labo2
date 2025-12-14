/*Escribe una funci´on que tome dos cadenas como entrada y determine si son
iguales o no utilizando punteros y funciones de la librer´ıa string.h.
*/

#include <stdio.h>
#include <string.h>

void determina_si_son_iguales( char cadena1[], char cadena2[], int *verificacion);

int main()
{
    char cadena1[100];
    char cadena2[100];
    int verificacion;

    printf("Ingrese una cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese una cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';


    determina_si_son_iguales(cadena1, cadena2, &verificacion);

    if (verificacion == 0)
    {
        printf("Las cadenas son iguales");
    }else{
        printf("Las cadenas no son iguales");
    }
    
    
    return 0;
}

void determina_si_son_iguales( char cadena1[], char cadena2[], int *verificacion){

    *verificacion = strcmp(cadena1, cadena2);

    return;
}