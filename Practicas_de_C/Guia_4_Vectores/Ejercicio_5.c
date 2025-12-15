/*Escribe un programa en C que solicite al usuario el tama˜no de dos vectores y
luego los rellene con n´umeros enteros ingresados por el usuario. Implementa
una funci´on en C que tome dos vectores como argumentos y devuelva su suma
como un tercer vector.
*/

#include <stdio.h>

int main()
{
    int tamano, numero = 05;


    printf("Ingrese el tamaño para los dos vectores: ");
    scanf("%d",&tamano);

    int vector1[tamano], vector2[tamano];
    
    
    printf("Rellene con números enteros el primer vector: ");
    for (int i = 0; i < tamano; i++)
    {   
        numero = 0;
        scanf("%d",&numero);
        vector1[i] = numero;
    }

    printf("Rellene con números enteros el segundo vector: ");
    for (int i = 0; i < tamano; i++)
    {
        scanf("%d",&numero);
        vector2[i] = numero;
    }
    

    
    int vector3[tamano];


    for (int i = 0; i < tamano ; i++){ 

        vector3[i] = vector1[i] + vector2[i];
        
    }
    
    printf("La suma de los dos vectores es: ");

    for (int i = 0; i < tamano; i++)
    {
        printf(" %d",vector3[i]);
    }
    


    return 0;
}
