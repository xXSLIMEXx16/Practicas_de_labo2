/*Desarrolla una funci´on en C llamada esprimo que reciba un n´umero entero
como entrada y devuelva 1 si el n´umero es primo, o 0 en caso contrario. Luego,
escribe un programa que solicite un n´umero al usuario y utilice esta funci´on
para determinar si es primo o no, mostrando el resultado correspondiente*/

#include <stdio.h>

int esprimo(int n);

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (esprimo(numero))
        printf("El número %d es primo.\n", numero);
    else
        printf("El número %d NO es primo.\n", numero);

    return 0;
}

int esprimo(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1;
}