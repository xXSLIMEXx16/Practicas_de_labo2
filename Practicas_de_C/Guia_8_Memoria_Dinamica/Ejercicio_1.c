/*Escribe un programa que solicite al usuario ingresar un n´umero entero. Luego,
asigna memoria din´amica para este entero y almacena el valor ingresado. Finalmente,
 imprime el valor almacenado y libera la memoria asignada.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numero; 

    numero = (int *)malloc(sizeof(int));

    if (numero == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    printf("Ingrese un número entero: ");
    scanf("%d", numero);

    printf("El número ingresado es: %d\n", *numero);

    free(numero);

    return 0;
}