/*Crear un programa que calcule la suma de dos n´umeros ingresados por el usuario
utilizando punteros*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, numero2, suma;
    int *p_numero1 = &numero1;
    int *p_numero2 = &numero2;

    printf("Ingrese dos numeros: ");
    scanf("%d %d",p_numero1, p_numero2);

    suma = *p_numero1 + numero2;

    printf("La suma de los numero es: %d",suma);
    return 0;
}
