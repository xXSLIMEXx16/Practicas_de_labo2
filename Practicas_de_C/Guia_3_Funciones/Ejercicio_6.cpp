/*Crea una funci´on en C llamada imprimirtablero que imprima un tablero de
ajedrez de tama˜no n x n, donde n es un n´umero ingresado por el usuario. La
funci´on debe mostrar un tablero con las casillas alternando entre espacios en
blanco y asteriscos.
*/

#include <stdio.h>

void imprimirtablero(int n);

int main(int argc, char const *argv[])
{
    int n;

    printf("Ingrese un número para generar la tabla de ajedez: ");
    scanf("%d",&n);

    imprimirtablero(n);
    
    return 0;
}

void imprimirtablero(int n){

    for (int i = 0; i < n; i++)
    { 
       for (int j = 0; j < n; j++)
       {
        if ((i+j)%2 == 0)
        {
            printf("*");
        }else
        {
            printf(" ");
        }
       }
       printf("\n");
    }
    
}