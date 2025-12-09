/*Escribir un programa que calcule el factorial de un n´umero ingresado por el
usuario utilizando punteros.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, total=1;
    int *p_numero1 = &numero1;

    printf("Ingrese dos numeros: ");
    scanf("%d",&numero1);

    for (int i = *p_numero1; i != 0; i--)
    {
        total *= i;
    }
    
    printf("El factorial de %d es: %ld ",*p_numero1, total);

    return 0;
}
