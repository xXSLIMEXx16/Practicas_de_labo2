/*Escribe un programa que solicite al usuario ingresar las longitudes de los tres
lados de un tri´angulo y determine si es equil´atero, is´osceles o escaleno.*/
#include <stdio.h>
int main(){
    int lado1, lado2, lado3;
    printf("Ingrese las longitudes de tres lados para determinar que tipo de triangulo es: ");
    scanf("%d %d %d",&lado1 ,&lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3) { 
    printf("El triangulo es equilatero");
  }else if( lado1 == lado2 || lado1 == lado3 || lado2 == lado3){ 
    printf("El triangulo es isosceles");
   } else{ 
    printf("El triangulo es escaleno");
     }
    return 0;
}