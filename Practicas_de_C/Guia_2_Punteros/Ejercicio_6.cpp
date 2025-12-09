/*Crear un programa que determine si un n´umero ingresado por el usuario es
positivo, negativo o cero utilizando punteros*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1;
    int *p_numero1 = &numero1;

    printf("Ingrese dos numeros: ");
    scanf("%d",p_numero1);

    if (numero1 > 0)
    {
        printf("El número %d es positivo",*p_numero1);
    }else if (numero1 < 0)
    {
        printf("El número %d es negativo",*p_numero1);
    }else
    {
        printf("El número es cero");
    }
    
    
    
    return 0;
}

