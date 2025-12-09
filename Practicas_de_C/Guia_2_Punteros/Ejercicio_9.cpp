/*Crear un programa que determine si un car´acter ingresado por el usuario es una
vocal utilizando punteros*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char numero1;
    char *p_numero1 = &numero1;

    printf("Ingrese un caracter: ");
    scanf("%c",p_numero1);

    switch (*p_numero1)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Es caracter ingresado es una vocal");
        break;
    
    default:
    printf("El caracter ingresado no es una vocal");
        break;
    }

    return 0;
}
