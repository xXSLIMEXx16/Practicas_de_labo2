/*Crea una funci´on en C llamada contardigitos que acepte un n´umero entero
como par´ametro y devuelva la cantidad de d´ıgitos que tiene. Luego, modifica
un programa para utilizar esta funci´on, solicitando al usuario un n´umero entero
y mostrando la cantidad de d´ıgitos que tiene.
*/
#include <stdio.h>

int contardigitos(int numero);

int main() {
    int numero;
    int cantidad;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    cantidad = contardigitos(numero);

    printf("La cantidad de ditos que tiene es: %d",cantidad);

    return 0;
}

int contardigitos(int numero){
    int resto = 1;
    int entero = numero;
    int contador = 0;

    for (int i = 0; resto != 0 ; i++)
    {
        resto = entero % 10;
        entero = entero / 10;

        if (resto != 0)
        {
        contador++;
            
        }
        
        
    }
    
    return contador;
}
