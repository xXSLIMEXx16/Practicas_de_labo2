/*Escribe una funci´on en C llamada encontrarmenor que tome tres n´umeros enteros como entrada y devuelva el menor de los tres como resultado. Luego,
escribe un programa que solicite tres n´umeros al usuario, utilice esta funci´on
para encontrar el menor, y finalmente imprima el resultado.*/
#include <stdio.h>

void encontrarmenor(int *a, int *b, int *c);

int main(int argc, char const *argv[])
{   
    int a, b, c;

    printf("Ingrese 3 números: ");
    scanf("%d %d %d",&a, &b, &c);

    encontrarmenor(&a, &b, &c);

    printf("El número menor es: %d", a);
    return 0;
}

void encontrarmenor(int *a, int *b, int *c){
int menor = *a;

if (*b < menor) {
        
    menor = *b;
    }
    if (*c < menor) {
        menor = *c;
    }
    *a = menor;
    return;
}
