/*Crea un programa que solicite al usuario ingresar un n´umero entero no negativo
y luego calcule su factorial.
*/
#include <stdio.h>
int main(){
    int factorial = 0;
    long int total = 1;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d",&factorial);

    for (int i = factorial; i != 0; i--)
    {
        total *= i;
    }
    
    printf("El factorial de %d es: %ld ",factorial, total);
}