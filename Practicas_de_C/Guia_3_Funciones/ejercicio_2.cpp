/*Implementa una funci´on en C llamada calcularpromedio que reciba un arreglo
de n´umeros enteros y su longitud como par´ametros, y devuelva el promedio de
los elementos del arreglo. Luego, escribe un programa que solicite al usuario ingresar los elementos de un arreglo,
utilice esta funci´on para calcular el promedio,
y finalmente imprima el resultado*/

#include <stdio.h>

float calcularpromedio(int notas[], int promedio);

int main(int argc, char const *argv[])
{
    int notas[500];
    int longitud = 0;
    int fin = true;
    int dato;
    char op;
    float promedio;

    for (int i = 0; fin ; i++)
    {
       printf("Ingrese un elemento para el arreglo: ");
       scanf("%d",&dato);
       
       notas[i] = dato;
       longitud++;
       printf("Quiere ingresar otro elemento? S/N: ");
       scanf(" %c",&op);

       if (op == 'n' || op == 'N') 
       {
        fin = false;
       }
       

    }
    
    promedio = calcularpromedio(notas, longitud);

    printf("El promedio total es: %.2f", promedio);
     
    return 0;
}
float calcularpromedio(int notas[], int longitud){

    int suma = 0;
    float promedio = 0;

    for (int i = 0; i < longitud; i++)
    {
        suma += notas[i];
    }

    promedio = suma / longitud;
    
    return promedio;
}