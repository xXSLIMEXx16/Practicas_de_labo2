/*Desarrolla una calculadora de gastos que solicite al usuario ingresar el precio de
varios productos y luego calcule el total. El programa debe continuar pidiendo
precios hasta que el usuario decida detenerse.*/

#include <stdio.h>

int main(){
    float total = 0;
    float precio = 0;
    bool opcion = true;
    char continuar;

    do
    {
        printf("Ingrese el precio del producto: ");
        scanf("%f",&precio);
        fflush(stdin);

        total += precio;
        fflush(stdin);

        bool error = true;
        printf("Quiere ingresar otro producto S/N: ");
         
        scanf(" %c",&continuar);
        
        while (error)
        {

            if (continuar == 's' || continuar == 'S')
            {
                error = false;
            }else if (continuar == 'n' || continuar == 'N')
            {
                error = false;
                opcion = false;
            }else
            {   
               
                printf("Opción incorrecta, Desea ingresar otro producto S/N ");
                 
                scanf(" %c",&continuar);
                
            }
        
        }

    } while (opcion);

    printf("El total de todo es de $ %.2f \n", total);
    printf("Saliendo...");

    return 0;
}