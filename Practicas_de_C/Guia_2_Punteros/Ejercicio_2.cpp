/*Desarrollar un programa que encuentre el mayor entre dos n´umeros ingresados
por el usuario utilizando punteros.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, numero2;
    int *p_numero1 = &numero1 ;
    int *p_numero2 = &numero2;

    printf("Ingrese dos numeros: ");
    scanf("%d %d",p_numero1, p_numero2);

    if (numero1 < numero2)
    {
        printf("El número %d es mayor a %d",numero2 ,numero1);
    }else if (numero1 > numero2)
    {
        printf("El número %d es mayor %d", numero1, numero2);
        
    }else
    {
        printf("Los numeros son iguales");
    }
    
    
    
    return 0;
}
