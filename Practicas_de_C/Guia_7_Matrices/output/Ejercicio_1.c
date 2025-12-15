/*Escribe un programa que solicite al usuario ingresar datos para una matriz
cuadrada de tama˜no N × N. Luego, pasa esta matriz a una funci´on por valor
que calcule la suma de los elementos en la diagonal principal y en la diagonal
secundaria, e imprima ambos resultados junto con la matriz ingresada.
*/

#include <stdio.h>

int sumar_diagonales(int n, int matriz[n][n],int *aux);
int main()
{   
    int n=0;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d",&n);
    int matriz[n][n];
    int aux;
    int principal;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    principal = sumar_diagonales(n, matriz, &aux);

    printf("La matriz ingresada es: \n \n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("%2d",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nLa suma de la diagonal principal es: %d \nLa suma de la diagonal secundaria es: %d",principal, aux);
    return 0;
}

int sumar_diagonales(int n, int matriz[n][n], int *aux){
    int diagonal_principal = 0, diagonal_secundaria = 0;
    
    for (int i = 0; i < n; i++)
    {
       diagonal_principal += matriz[i][i];
        
    }

    for (int i = 0; i < n; i++)
    {
        diagonal_secundaria += matriz[i][n - 1 - i];
    }
    
    
    *aux = diagonal_secundaria;
    return diagonal_principal;
}