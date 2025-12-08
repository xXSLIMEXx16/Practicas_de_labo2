#include <stdio.h>

int main() {
    char nombre[50];

    printf("Ingresa tu nombre: ");
    fgets(nombre, 50, stdin);

    printf("Hola %s", nombre);

    return 0;
}