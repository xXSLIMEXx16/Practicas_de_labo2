/*Escribir un programa que solicite al usuario un n´umero y luego imprima su
direcci´on de memoria utilizando punteros.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int numero1;
    int *p_numero1 = &numero1;

    printf("Ingrese dos numeros: ");
    scanf("%d",p_numero1);

    printf("La dirección de memoria donde se guardo el valor %d es %d, %d, %d",*p_numero1, p_numero1, &numero1, &p_numero1);
    return 0;
}
