/*Un comerciante necesita controlar las ventas de dos tipos de productos (A y B)
durante un mes. Para cada producto vendido, se ingresan los siguientes datos:
Tipo de producto (A o B) Precio unitario del producto Cantidad vendida El
ingreso de ventas finaliza al ingresar el tipo de producto como ”F” (fin). Se
requiere calcular y mostrar: a) El monto total de ventas para cada tipo de
producto. b) El porcentaje de participaci´on de cada tipo de producto sobre
el total de ventas. c) Indicar cu´al fue el tipo de producto que gener´o mayor
cantidad de ingresos.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char seguir;
    char tipo;

    do
    {
       printf("Ingrese que tipo de producto es (A/B): ");
       scanf(" %c",&tipo);

       if (tipo == 'a' || tipo == 'A')
       {
        
       }
       

    } while (seguir);
    
    return 0;
}
