/*Implementa un programa que simule un conteo regresivo para el despegue de
un cohete. El usuario debe ingresar un n´umero entero positivo y el programa
debe imprimir los n´umeros desde ese n´umero hasta 0.
*/

#include <stdio.h>

int main(){
    int numero = 0;

    printf("Ingrese un numero para hacer la cuenta regresiva: ");
    scanf("%d",&numero);

    for (int i = numero; i >= 0 ; i--)
    {
        printf("%d \n",i);
    }
    
    return 0;

}