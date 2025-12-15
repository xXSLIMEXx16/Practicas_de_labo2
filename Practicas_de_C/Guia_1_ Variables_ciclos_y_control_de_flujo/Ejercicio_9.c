/*Crea un programa que solicite al usuario ingresar un n´umero y luego imprima
la tabla de multiplicar de ese n´umero del 1 al 10*/

#include <stdio.h>
int main(){
    int numero = 0;
    int total =0;

    printf("Ingrese un numero para generar su tabla de multiplicar: ");
    scanf("%d",&numero);

    printf("============ La tabala de multiplicar de %d ================\n",numero);

    for (int i = 1; i < 11; i++)
    {
        total = 0;
        total = numero * i;

        printf("%d X %d = %d \n",numero, i, total);
    }
    

}
