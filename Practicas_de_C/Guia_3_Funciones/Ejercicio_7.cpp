/*Se requiere desarrollar un programa que gestione la informaci´on de una librer´ıa.
Para cada libro vendido, se ingresan los siguientes datos:
C´odigo del libro (n´umero entero positivo) Precio de compra del libro Precio de
venta del libro Cantidad vendida El ingreso de libros finaliza al introducir el
c´odigo 0. Se debe calcular y mostrar: a) La ganancia obtenida por cada libro
vendido, calculada como la diferencia entre el precio de venta y el precio de
compra multiplicado por la cantidad vendida. b) El total de libros procesados
y las ganancias totales obtenidas. Por ejemplo, ”Se procesaron 50 libros, con
ganancias totales de x.
*/
#include <stdio.h>

float ganancia_por_libro(float precio_compra, float precio_venta, int cantidad_vendida);
void total_final(float ganancias, int cantidad);

int main(int argc, char const *argv[])
{
    int seguir=0, codigo=0, cantidad_vendida=0, libros_vendidos=0;
    float precio_compra=0, precio_venta=0, ganancia_total=0, ganancia_por_venta;
        
    do{
        
        printf("Ingrese el codigo del libro: ");
        scanf("%d",&codigo);

        if (codigo != 0)
        {
            printf("Ingrese el precio de compra del libro: ");
            scanf("%f",&precio_compra);

            printf("Ingrese el precio de venta del libro: ");
            scanf("%f",&precio_venta);

            printf("Ingrese la cantidad de libros vendidos: ");
            scanf("%d",&cantidad_vendida);

            ganancia_por_venta = ganancia_por_libro(precio_compra, precio_venta, cantidad_vendida);
            ganancia_total += ganancia_por_venta;
            libros_vendidos += cantidad_vendida;


            
        }
        
    } while (codigo != 0);

    total_final(ganancia_total, libros_vendidos);
    
    return 0;
}

float ganancia_por_libro(float precio_compra, float precio_venta, int cantidad_vendida){
    float ganancia = cantidad_vendida * (precio_venta - precio_compra);

    printf("La ganacia por cada libro vendido es de: %.2f \n",ganancia);

    return ganancia;
}

void total_final(float ganancias, int cantidad){

    printf("El total de libros procesaros %d, con ganancias totales de %.2f \n",cantidad,ganancias);
}