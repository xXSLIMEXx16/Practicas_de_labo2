/*Completa un programa en C que imprima una secuencia de Fibonacci de longitud n, donde n es un n´umero ingresado por el usuario.
 Define una funci´on
llamada generarfibonacci que tome un par´ametro n y genere la secuencia correspondiente*/
#include <stdio.h>
void secuencia_fibonacci(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingrese un número: ");
    scanf("%d",&n);

    secuencia_fibonacci(n);
    return 0;
}

void secuencia_fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n > 0) printf("%d ", a);
    if (n > 1) printf("%d ", b);

    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
