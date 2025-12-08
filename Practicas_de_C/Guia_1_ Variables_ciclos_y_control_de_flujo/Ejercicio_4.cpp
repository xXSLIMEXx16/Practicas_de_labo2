//Desarrolla un programa que solicite al usuario ingresar su edad e imprima en
//qué categoria se encuentra (niño, adolescente, adulto).
#include <stdio.h>
int main(){

int edad = 0;
printf("Ingrese su edad: ");
scanf("%d",&edad);

if (edad > 0 && edad < 12)
{
    printf("Usted es un niño");
}else if (12 <= edad && edad < 18)
{
    printf("Usted es adolescente");
}else if (edad >= 18)
{
    printf("Usted es adulto");
}else
{
    printf("La edad debe ser un numero decimal y positivo");
}

return 0;
}