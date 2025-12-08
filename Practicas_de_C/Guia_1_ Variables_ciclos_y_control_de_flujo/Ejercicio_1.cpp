//Escribe un programa que solicite al usuario ingresar dos números enteros y luego
//imprima el mayor de los dos. Si son iguales que imprima ’son iguales’
#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Ingrese dos números enteros:\n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("El numero mayor es %d", a);
    }else if (b > a)
    {
       printf("El número mayor es %d",b);
    }else
    {
        printf("Los número son iguales");
    }
    
    


    return 0;
}
