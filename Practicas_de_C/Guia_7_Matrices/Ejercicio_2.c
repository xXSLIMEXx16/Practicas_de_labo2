/*Desarrolla un programa que solicite al usuario ingresar dos matrices de tama˜no
M × N. Luego, calcula la suma de estas dos matrices y muestra el resultado
junto con ambas matrices originales.*/

#include <stdio.h>
void suma_de_matrices(int m, int n, int matriz_A[m][n], int matriz_B[m][n], int matriz_Suma[m][n]);

int main()
{
    int n=0,m = 0;
    printf("Ingrese el tamaño de la matriz que tendran las matrices M x N: ");
    scanf("%d",&m);
    scanf("%d",&n);
    
    int matriz_A[m][n];
    int matriz_B[m][n];
    int Matriz_Suma[m][n];

    printf("=====INGRESE LOS VALORES PARA LA PRIMERA MATRIZ=====\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz_A[i][j]);
        }
    }
    
    
    printf("=====INGRESE LOS VALORES PARA LA SEGUNDA MATRIZ=====\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz_B[i][j]);
        }
    }
    

    suma_de_matrices(m, n, matriz_A, matriz_B, Matriz_Suma);

    printf("Las matrices ingresadas son \nMATRIZ A:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%2d ",matriz_A[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ B:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%2d ",matriz_B[i][j]);
        }
        printf("\n");
    }

    printf("La suma de las dos matrices es:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%2d ",Matriz_Suma[i][j]);
        }
        printf("\n");
    }

    
}

void suma_de_matrices(int m, int n, int matriz_A[m][n], int matriz_B[m][n], int matriz_Suma[m][n]){


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz_Suma[i][j] = matriz_A[i][j] + matriz_B[i][j];
        }
        
    }
    
}