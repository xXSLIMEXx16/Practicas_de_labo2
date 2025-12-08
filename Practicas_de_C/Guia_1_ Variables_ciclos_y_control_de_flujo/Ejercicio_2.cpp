//Desarrolla un programa que solicite al usuario ingresar un número entero e
//imprima si es par o impar

#include <stdio.h>
int main(){

long int numero ;
printf("Ingrese un número entero:\n");
scanf("%d", &numero);

if (numero%2 == 0){
    printf("El número %d es par", numero);
}else{
    printf("El número %ld es impar", numero);
}

return 0;
}