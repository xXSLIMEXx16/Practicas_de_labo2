//Escribe un programa que solicite al usuario ingresar un año e imprima si es
//bisiesto o no. Un año es bisiesto si es divisible por 4 pero no por 100, o si es
//divisible por 400.
#include <stdio.h>

int main(){ 
int ano;
printf("Ingrese un Año para saber si es un año bisiesto: ");
scanf("%d",&ano);

if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
{
    printf("El año %d es un año bisiesto.",ano);
}else
{
    printf("El año %d no es bisiesto.",ano);
}

return 0;
}