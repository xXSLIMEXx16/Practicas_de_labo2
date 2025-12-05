#include <stdio.h>

int main()
{  
    int datos;

   printf("Hola, Mundo!\n");
   scanf("%d",&datos);

for (int i = 0; i < datos; i++) {
    printf("Iteracion %d\n", i+1);
 }
    return 0;
}
