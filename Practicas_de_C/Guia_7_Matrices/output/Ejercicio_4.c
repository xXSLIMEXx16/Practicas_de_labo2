/*Crea un programa que le pida al usuario ingresar una matriz cuadrada y luego
compruebe si es una matriz sim´etrica o no. Una matriz es sim´etrica si es igual a
su matriz transpuesta. Muestra la matriz ingresada y su transpuesta junto con
un mensaje indicando si la matriz es sim´etrica o no*/

#include <stdio.h>
void simetrica(int matriz[3][3]);
int main()
{
    int matriz[3][3];
    printf("Ingrese los valores de una matriz 3x3: ");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese un valor para la fila %d columna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }


    simetrica(matriz);

    return 0;
}

void simetrica(int matriz[3][3]){

    int matriz_i[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz_i[j][i] = matriz[i][j]; 
        }
        
    }
    
    printf("La matriz ingresada es: \n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",matriz[i][j]);
    }
        printf("\n");
    }

    printf("La matriz transpuesta es: \n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",matriz[i][j]);
    }
        printf("\n");
    }

   
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        if (matriz[i][j] == matriz_i[i][j])
        {
            
        }else
        {
           printf("Las matrices no son simetricas...");
           return;
        }
        
        
    }
    
    }
    printf("\nLas matrices son simetricas...");

}  