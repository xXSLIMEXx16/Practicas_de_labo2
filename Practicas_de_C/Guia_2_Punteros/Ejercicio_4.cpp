/*Implementar un programa que determine si un n´umero ingresado por el usuario
es par o impar utilizando punteros*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1;
    int *p_numero1 = &numero1;

    printf("Ingrese dos numeros: ");
    scanf("%d",&numero1);

    if (*p_numero1 % 2 == 0)
    {
        printf("El número %d es par",*p_numero1);
    }else
    {
        printf("El número %d es impar",*p_numero1);
    }
    
    return 0;
}
