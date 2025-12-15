/*Escribir un programa que solicite al usuario dos n´umeros enteros y luego intercambie los valores de las variables utilizando punteros*/
#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int numero1, numero2;
    int *p_numero1 = &numero1 ;
    int *p_numero2 = &numero2;
    int aux;

    printf("Ingrese dos numeros: ");
    scanf("%d %d",&numero1, &numero2);
    printf("El número A es: %d y el B es: %d\n",*p_numero1, *p_numero2);

    aux = numero2;
    *p_numero2 = *p_numero1;
    *p_numero1 = aux;

    printf("Los valores han sido intercambiados, Número A: %d Número B: %d ",*p_numero1, *p_numero2);
    return 0;
}
