/*Desarrolla una funci´on que tome una matriz y su tama˜no como entrada y devuelva la matriz transpuesta. 
Luego, utiliza esta funci´on para imprimir la matriz
original y su transpuesta.
*/

#include <stdio.h>

void matriz_trans(int m, int n, int matriz[m][n]);

int main()
{
    int n=0,m = 0;
    printf("Ingrese el tamaño de la matriz que tendran las matrices M x N: ");
    scanf("%d",&m);
    scanf("%d",&n);
    
    int matriz[m][n];
    
    printf("=====INGRESE LOS VALORES PARA LA PRIMERA MATRIZ=====\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    matriz_trans(m, n, matriz);

    return 0;
}

void matriz_trans(int m, int n, int matriz[m][n]){

    int matriz_i[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz_i[j][i] = matriz[i][j];
        }
    }
    
    printf("La Matriz ingresada es:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("La Matriz transpuesta es:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",matriz_i[i][j]);
        }
        printf("\n");
    }
    
}