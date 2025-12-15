/*Crea un programa que simule una cuenta de ahorro. El usuario ingresa la
cantidad de dinero que quiere ahorrar mensualmente. El programa debe calcular
cuánto dinero habrá acumulado en un a˜no considerando un interés fijo mensual
del 35%*/

#include <stdio.h>

int main(){
    float dinero_ingresado = 0;
    float dinero_aux = 0;
    float dinero = 0;
    
    printf("Ingrese la cantidad de dinero que quiere ahorrar mensualmente: ");
    scanf("%f",&dinero_ingresado);

    
    for (int i = 0; i < 12; i++)
    {   dinero += dinero_ingresado;
        dinero_aux = dinero;    
        dinero += dinero_aux * 0.35;       

    }
    printf("El dinero final es: %.2f",dinero);

    return 0;
}