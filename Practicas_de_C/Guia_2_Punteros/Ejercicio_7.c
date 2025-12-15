/*Implementar un programa que calcule la potencia de un n´umero ingresado por
el usuario utilizando punteros*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, potencia=0;
    int *p_numero1 = &numero1;

    printf("Ingrese dos numeros: ");
    scanf("%d",p_numero1);

    potencia = numero1 * numero1;

    printf("La potencia de %d es: %d",numero1, potencia);
    return 0;
}
