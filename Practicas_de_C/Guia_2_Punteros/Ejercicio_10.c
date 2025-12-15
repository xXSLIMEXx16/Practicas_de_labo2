/*Crear un programa que encuentre la suma de los d´ıgitos de un n´umero ingresado
por el usuario utilizando punteros*/

#include <stdio.h>

int main() {
    int numero, suma=0;
        int *p_numero = &numero;  
  

    printf("Ingrese un numero: ");
    scanf("%d", &numero);



   
    int aux = *p_numero;

    while (aux != 0) {
        int digito = aux % 10;  
        suma += digito;
        aux /= 10;            
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}
