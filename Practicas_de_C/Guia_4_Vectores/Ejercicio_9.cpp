/*Implementa una funci´on en C que determine si un vector dado es sim´etrico, es
decir, si es igual al vector invertido*/

#include <stdio.h>

void es_simetrico(int vector[], int tamano);

int main()
{
    int v_simetrico[] = {1, 2, 3, 4, 3, 2, 1};
    int v_no_simetrico[] = {1, 2, 3, 4, 5, 6};

    int tamano = sizeof(v_simetrico)/sizeof(v_simetrico[0]);
    es_simetrico(v_simetrico, tamano);

    tamano = sizeof(v_no_simetrico)/sizeof(v_no_simetrico[0]);
    es_simetrico(v_no_simetrico, tamano);


    return 0;
}

void es_simetrico(int vector[], int tamano){

    int v_ivertido[tamano];
/// Aca invierto el vector

    for (int i = 0; i < tamano; i++)
    {
        v_ivertido[i] = vector[i];
    }
    
/// Aca corroboro si es simetrico
    int final = tamano -1;
    for (int i = 0; i < tamano; i++)
    {
        if (v_ivertido[i] == vector[final])
        {
            if (final < i)
            {
                printf("El vector es simetrico\n");
                return;
            }
            
        }else
        {
            printf("El vector no es simetrico");
            return;
        }
        final--;
    }
    return;
}