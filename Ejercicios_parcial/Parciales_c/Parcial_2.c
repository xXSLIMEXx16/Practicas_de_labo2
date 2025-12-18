#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct articulo {
int codigo_producto;
char nombre[50];
float precio;
int cantidad_disponible;
int cantidad_vendida;
};

void cargar_articulos(struct articulo **inventario, int *cantidad);
void imprimir_datos(struct articulo *inventario, int cantidad);
void modificar_por_codigo(struct articulo **inventario, int cantidad);
void vender_productos(struct articulo **inventario, int cantidad);
void cantidad_vendida( struct articulo *inventario, int cantidad);
void eliminar_dato(struct articulo **inventario, int *cantidad);
void guardar_datos(struct articulo *inventario, int cantidad);
void cargar_datos(struct articulo **inventario,int *cantidad);



int main()
{

    struct articulo *inventario = NULL; 
    int seguir = 1, op, cantidad = 0;
    char menu[]= "====== Menu ======\n"
                 "1- Cargar articulos\n"
                 "2- Mostrar datos\n"
                 "3- modificar por codigo\n"
                 "4- Vender producto\n"
                 "5- Calcular cantidad vendida\n"
                 "6- Eliminar datos\n"
                 "7- Guardar datos\n"
                 "8- Cargar datos\n"
                 "9- Salir\n"
                 "==================\n"
                 "ingresar opción: ";
    
    do
    {
        printf("%s",menu);
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            cargar_articulos(&inventario, &cantidad);
            break;
        case 2:
            imprimir_datos(inventario, cantidad);
            break;
        case 3:
            modificar_por_codigo(&inventario, cantidad);
            break;
        case 4:
            vender_productos(&inventario, cantidad);
            break;
        case 5:
            cantidad_vendida(inventario, cantidad);
            break;
        case 6:
            eliminar_dato(&inventario, &cantidad);
            break;
        case 7 :
            guardar_datos(inventario, cantidad);
            break;
        case 8:
            cargar_datos(&inventario, &cantidad);
            break;
        case 9:
            printf("Saliendo del programa...\n");
            free(inventario);
            seguir = 0;
            break;
        default:
            printf("Opción incorrecta\n");
            break;
        }
    } while (seguir);
    
    return 0;
}

/*Se solicita una funci´on que ingrese los datos en un vector din´amico
 de estructuras del tipo ”struct articulo” hasta que el usuario decida no ingresar
m´as productos*/

void cargar_articulos(struct articulo **inventario, int *cantidad){
int seguir = 1;
char quiere;
        do
        {   
            
           *cantidad += 1;
           *inventario = (struct articulo* )realloc(*inventario ,(*cantidad) * sizeof(struct articulo));

           if (*inventario == NULL)
           {
            printf("No se a podido asignar espacio correctamente...\n");
            return;
           }
           
           printf("Ingrese codigo del producto: ");
           scanf("%d",&(*inventario)[*cantidad - 1].codigo_producto);
           while(getchar() != '\n');

           printf("Nombre del producto: ");
           fgets((*inventario)[*cantidad - 1].nombre, sizeof((*inventario)[*cantidad - 1].nombre), stdin);
           (*inventario)[*cantidad - 1 ].nombre[strcspn((*inventario)[*cantidad - 1 ].nombre, "\n")] = '\0';

           printf("ingresar precio: ");
           scanf("%f",&(*inventario)[*cantidad - 1].precio);
           while(getchar() != '\n');

           printf("Ingrese cantidad disponible: ");
           scanf("%d",&(*inventario)[*cantidad - 1].cantidad_disponible);

           printf("Ingrese la cantidad vendida: ");
           scanf("%d",&(*inventario)[*cantidad - 1].cantidad_vendida);

           printf("Quiere ingresar otro producto (S/N): ");
           scanf(" %c",&quiere);
           while(getchar() != '\n');

           if (quiere == 'n' || quiere == 'N')
           {
            seguir = 0;
           }
           

        } while (seguir);
        
}

/*Se solicita una funci´on que imprima los elementos del vector cargado de
manera ordenada y formateada en la consola, presentando la informaci´on
de manera est´etica.*/

void imprimir_datos(struct articulo *inventario, int cantidad){

    if (cantidad != 0)
    {
         for (int i = 0; i < cantidad; i++)
        {
            printf("======= PRODUCTO %d =======\n",i+1);
            printf("Coddigo del producto: %d\n",inventario[i].codigo_producto);
            printf("Nombre del producto: %s\n",inventario[i].nombre);
            printf("Precio del producto: %.2f\n",inventario[i].precio);
            printf("Cantidad disponible: %d\n",inventario[i].cantidad_disponible);
            printf("Cantidad vendida: %d\n",inventario[i].cantidad_vendida);
            printf("===========================\n");
        }
        

    }else
    {
        printf("No hay productos registrados...\n");
    }
    

}

/*Se solicita una funci´on que solicite el c´odigo del producto y con ese dato
permita modificar todos los par´ametros siguientes del art´ıculo.*/

void modificar_por_codigo(struct articulo **inventario, int cantidad){

    int codigo;
    printf("Ingrese el codigo: ");
    scanf("%d",&codigo);
    
        for (int i = 0; i < cantidad; i++)
        {
            if ((*inventario)[i].codigo_producto == codigo)
            {
                while (getchar() != '\n');
                {
                    /* code */
                }
                
                printf("Nombre del producto: ");
                fgets((*inventario)[i].nombre, sizeof((*inventario)[i].nombre), stdin);
                (*inventario)[i].nombre[strcspn((*inventario)[i].nombre, "\n")] = '\0';

                printf("ingresar precio: ");
                scanf("%f",&(*inventario)[i].precio);
                 while(getchar() != '\n');

                 printf("Ingrese cantidad disponible: ");
                 scanf("%d",&(*inventario)[i].cantidad_disponible);

                 printf("Ingrese la cantidad vendida: ");
                 scanf("%d",&(*inventario)[i].cantidad_vendida);

                 return;
            }
            
        }
        printf("Codigo no registrado...\n");
    
    
    
}

/*Se solicita una funci´on que permita la venta de un producto. Para ello
debe ingresar el usuario la cantidad y codigo del producto a vender (no
olvide de verificar si existen la cantidad de productos disponibles, en caso
de concretar la venta incremente la cantidad vendida*/

void vender_productos(struct articulo **inventario, int cantidad){

int codigo;
int venta;
    printf("Ingrese el codigo del pruducto: ");
    scanf("%d",&codigo);
    printf("Ingresar la cantidad que desea vender: ");
    scanf("%d",&venta);

    for (int i = 0; i < cantidad; i++)
    {
        if ((*inventario)[i].codigo_producto == codigo)
        {
            if ( venta <= (*inventario)[i].cantidad_disponible )
            {
                (*inventario)[i].cantidad_disponible -= venta;
                (*inventario)[i].cantidad_vendida += venta;

                printf("Se vendieron %d unidades de %s\n",venta, (*inventario)[i].nombre);
                return;

            }else
            {
                printf("No hay suficientes unidades para vender...\n");
                return;
            }
            
            
        }
        
    }
    
}

/*Se solicita una funci´on que permita calcular el total de dinero recaudado
en ventas*/

void cantidad_vendida( struct articulo *inventario, int cantidad){

int cantidad_venta = 0;

    if (cantidad != 0)
    {
        for (int i = 0; i < cantidad; i++){
        cantidad_venta += inventario[i].cantidad_vendida;
        
        }

        printf("La cantidad de ventas de todos los productos es de: %d\n",cantidad_venta);
        return;

    }else
    {
       printf("No hay productos registrados\n");
       return;
    }
    

}

/* Se solicita imprimir los datos del vector de estructuras (puede reciclar el
inciso 2) imprimiendo tambien la posicion en la que se encuentra dentro del
vector, luego pidale al usuario que seleccione cual desea borrar y elimine
este elemento del vector */

void eliminar_dato(struct articulo **inventario, int *cantidad){

    imprimir_datos(*inventario, *cantidad);
    int eliminar;

    printf("Ingrese cual quiere eliminar: ");
    scanf("%d",&eliminar);

    if (eliminar <= *cantidad && eliminar > 0)
    {
         for (int i = eliminar - 1; i < *cantidad; i++)
    {
        (*inventario)[i] = (*inventario)[i + 1];
    }
        *cantidad -=1;
        *inventario = realloc(*inventario, *cantidad * sizeof(struct articulo));
        printf("El articulo se a eliminado exitosamente...\n");
    }else
    {
        printf("Articulo inexistente...\n");
        return;
    }
    
    

}

/*Se solicita hacer una funcion que permita guardar los elementos del vector
de estructuras de un archivo binario*/

void guardar_datos(struct articulo *inventario, int cantidad){

    FILE *archivo = fopen("articulos.dat","wb");

    if (archivo == NULL || cantidad == 0)
    {
        printf("Error al abrir el archivo...\n");
        return;
    }
    
    fwrite(inventario, sizeof(struct articulo),cantidad, archivo);
    printf("Datos guardados correctamente...\n");
    fclose(archivo);
}

/* Se solicita hacer una funcion que permita cargar los elementos en el vector
de estructuras de un archivo binario */

void cargar_datos(struct articulo **inventario,int *cantidad){
    FILE *archivo = fopen("articulos.dat","rb");

    if (archivo == NULL)
    {
        printf("No se ha encontrado el archivo\n");
        return;
    }
    
    fseek(archivo, 0, SEEK_END);
    long tamano_archivo = ftell(archivo);
    rewind(archivo);

    *cantidad = tamano_archivo / sizeof(struct articulo);

    if (*cantidad > 0)
    {
        *inventario = (struct articulo* )malloc(*cantidad * sizeof(struct articulo));
    
        if (*inventario == NULL)
        {
        printf("Error al asignar el espacio...\n");
        fclose(archivo);
        return;
        }
        fread(*inventario, sizeof(struct articulo), *cantidad, archivo);
        printf("Datos cargados correctamente...\n");
        fclose(archivo);
    }
}