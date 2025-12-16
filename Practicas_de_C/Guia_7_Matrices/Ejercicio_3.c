/*Escribe un programa que genere una matriz de tama˜no M × N con n´umeros
aleatorios entre 1 y 100. Luego, encuentra el elemento m´as grande en la matriz
y muestra su valor junto con su posici´on (fila y columna).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void elemento_mayor(int m, int n, int matriz[m][n], int *m_mayor, int *n_mayor);

int main()
{
    srand(time(NULL));

    int n=0,m = 0;
    int m_mayor, n_mayor;
    printf("Ingrese el tamaño de la matriz que tendran las matrices M x N: ");
    scanf("%d",&m);
    scanf("%d",&n);
    int matriz[m][n];
     
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {       
            matriz[i][j] = ((rand() % (100)) + 1);
        }
    }

    elemento_mayor(m, n, matriz, &m_mayor, &n_mayor );
    printf("La matriz es: \n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%2d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("El elemto mas grande de la matriz es %d y se encuentra en la fila %d columna %d", matriz[m_mayor][n_mayor], m_mayor +1 , n_mayor+1);
    return 0;
}



void elemento_mayor(int m, int n, int matriz[m][n], int *m_mayor, int *n_mayor){
    
    int mayor = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mayor < matriz[i][j])
            {
                mayor = matriz[i][j];
                *m_mayor = i;
                *n_mayor = j;
            }   
        }
    }
}