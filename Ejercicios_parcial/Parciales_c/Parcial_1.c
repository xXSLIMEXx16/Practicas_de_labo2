#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct notebook{
int codigo_maquina;
char nombre_prestado[20];
long int dni;
char fecha_prestamo[12]; //25-06-2024
char fecha_expiracion[12]; //30-06-2024
float valor_asegurado;
};

void ingresar_datos(struct notebook **iventario, int *cantidad);
void cargar_datos(struct notebook *inventario, int cantidad);
void modificar_por_dni(struct notebook **inventario, int tamano);
void modificar_todos_los_parametros(struct notebook **inventario, int cantidad);
void eliminar_maquina(struct notebook **inventario, int *tamano);


void guardar_binario(struct notebook *inventario, int cantidad);
void cargar_desde_binario(struct notebook **inventario, int *cantidad);
int main()
{   
    struct notebook *inventario = NULL;
    int seguir = 1, op, cantidad = 0;
    char menu[]= "====== Menu ======\n"
                 "1- Ingresar datos\n"
                 "2- Mostrar datos guardados\n"
                 "3- Modificar fecha de expiración\n"
                 "4- Modificar todos los datos\n"
                 "5- Eliminar datos\n"
                 "6- Guardar datos en archivo binario\n"
                 "7- Cargar datos del archivo .dat\n"
                 "ingresar opción: ";
    
    do
    {   
        printf("%s", menu);
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            ingresar_datos(&inventario , &cantidad);
            break;
        case 2:
            cargar_datos(inventario, cantidad);
            break;
        case 3:
            modificar_por_dni(&inventario, cantidad);
            break;

        case 4:
            modificar_todos_los_parametros(&inventario, cantidad);
            break;

        case 5: 
            eliminar_maquina(&inventario, &cantidad);
            break;
        case 6:
            guardar_binario(inventario, cantidad);
            break;

        case 7: 
            cargar_desde_binario(&inventario, &cantidad);
            break;
        case 8: 
            printf("Saliendo del programa...\n");
            free(inventario);
            seguir = 0;
            break;
        default:    
            printf("Opcdión Invalida...\n");
            break;
        }
    } while (seguir);
    
    
    return 0;
}

/*Se solicita una función que ingrese los datos en un vector dinamico de
estructuras del tipo ”struct notebook” hasta que el usuario decida no
ingresar más notebooks.
*/

void ingresar_datos(struct notebook **inventario, int *cantidad){
    
char seguir;
int sigue = 1;

    do
    {
    *cantidad += 1;
    *inventario = (struct notebook *)realloc(*inventario, (*cantidad) * sizeof(struct notebook));

    if (*inventario == NULL)
    {
        printf("Error al asignar memoria\n");
        return;
    }
    
   

    printf("Ingrese el codigo de la maquina: ");
    scanf("%d",&(*inventario)[*cantidad-1].codigo_maquina); 
    
    while(getchar() != '\n'); 

    printf("Ingresar nombre del prestado: ");
    fgets((*inventario)[*cantidad-1].nombre_prestado, sizeof((*inventario)[*cantidad-1].nombre_prestado), stdin);
    (*inventario)[*cantidad-1].nombre_prestado[strcspn((*inventario)[*cantidad-1].nombre_prestado, "\n")]= '\0';
    

    printf("Ingrese el DNI: ");
    scanf("%ld",&(*inventario)[*cantidad - 1].dni);

    while(getchar() != '\n'); 

    printf("Ingrese la fecha de prestamo (FORMATO DD/MM/AA): ");
    fgets((*inventario)[*cantidad-1].fecha_prestamo, sizeof((*inventario)[*cantidad-1].fecha_prestamo), stdin);
    (*inventario)[*cantidad-1].fecha_prestamo[strcspn((*inventario)[*cantidad-1].fecha_prestamo, "\n")]= '\0';


    printf("Ingrese la fecha de expiración (FORMATO DD/MM/AA): ");
    fgets((*inventario)[*cantidad-1].fecha_expiracion, sizeof((*inventario)[*cantidad-1].fecha_expiracion), stdin);
    (*inventario)[*cantidad-1].fecha_expiracion[strcspn((*inventario)[*cantidad-1].fecha_expiracion, "\n")]= '\0';


    printf("Ingrese el valor asegurado: ");
    scanf("%f",&(*inventario)[*cantidad - 1].valor_asegurado);

    while(getchar() != '\n'); 

    printf("Quiere ingresar otra notebook (S/N):");
    scanf("%c",&seguir);

    if (seguir == 'n' || seguir == 'N')
    {
        sigue = 0;
    }
    

    } while (sigue);
    
    
}

/* Se solicita una función que imprima los elementos de vector cargado de
una manera ordenada y formateada en la consola (que se vea lindo)*/

void cargar_datos(struct notebook *inventario, int cantidad){

    for (int i = 0; i < cantidad; i++)
    {
        printf("========= NOTEBOOK %d =========\n",i+1);
        printf("Codigo de la maquina: %d \n",inventario[i].codigo_maquina);
        printf("Nombre del prestado: %s\n",inventario[i].nombre_prestado);
        printf("DNI: %ld\n",inventario[i].dni);
        printf("Fecha de pretsamo: %s\n",inventario[i].fecha_prestamo);
        printf("Fecha de expiración: %s\n",inventario[i].fecha_expiracion);
        printf("Valor asegurado: %.2f\n",inventario[i].valor_asegurado);

    }
    printf("=============================\n");
}

/*Se solicita hacer una función que solicite el dni y con ese dato se pueda
modificar la fecha de expiración del elemento al que pertenece*/
void modificar_por_dni(struct notebook **inventario, int tamano){
    
    long int dni;
    printf("Ingrese el DNI para modificar la fecha de expiración ");
    scanf("%ld",&dni);
    while(getchar() != '\n');

    for (int i = 0; i < tamano; i++)
    {
        if ((*inventario)[i].dni == dni)
        {
            printf("Ingrese la nueva fecha de expiración (FORMATO DD/MM/AA): ");
            fgets((*inventario)[i].fecha_expiracion, sizeof((*inventario)[i].fecha_expiracion), stdin);
            (*inventario)[i].fecha_expiracion[strcspn((*inventario)[i].fecha_expiracion, "\n")]= '\0';

            return;
        }
        
    }
    printf("DNI no registrado...\n");
}


/*Se solicita hacer una función que solicite el ”codigo de la maquina” y con
ese dato se pueda modificar todos los parametros siguientes*/

void modificar_todos_los_parametros(struct notebook **inventario, int cantidad){
    int codigo;
    printf("Ingrese el codigo de la maaquina: ");
    scanf("%d",&codigo);

    for (int i = 0; i < cantidad; i++)
    {
        if ((*inventario)[i].codigo_maquina == codigo)
        {
        while(getchar() != '\n');
        printf("Ingresar nombre del prestado: ");
        fgets((*inventario)[i].nombre_prestado, sizeof((*inventario)[i].nombre_prestado), stdin);
        (*inventario)[i].nombre_prestado[strcspn((*inventario)[i].nombre_prestado, "\n")]= '\0';
    

        printf("Ingrese el DNI: ");
        scanf("%ld",&(*inventario)[i].dni);

        while(getchar() != '\n'); 

        printf("Ingrese la fecha de prestamo (FORMATO DD/MM/AA): ");
        fgets((*inventario)[i].fecha_prestamo, sizeof((*inventario)[i].fecha_prestamo), stdin);
        (*inventario)[i].fecha_prestamo[strcspn((*inventario)[i].fecha_prestamo, "\n")]= '\0';


        printf("Ingrese la fecha de expiración (FORMATO DD/MM/AA): ");
        fgets((*inventario)[i].fecha_expiracion, sizeof((*inventario)[i].fecha_expiracion), stdin);
        (*inventario)[i].fecha_expiracion[strcspn((*inventario)[i].fecha_expiracion, "\n")]= '\0';


        printf("Ingrese el valor asegurado: ");
        scanf("%f",&(*inventario)[i].valor_asegurado);

        while(getchar() != '\n'); 

        return;
        }
        
    }
    
    printf("Maquina no registrada...\n");
}


/*Se solicita imprimir los datos del vector de estructuras (puede reciclar el
inciso 2) imprimiendo tambien la posicion en la que se encuentra dentro del
vector, luego pidale al usuario que seleccione cual desea borrar y elimine
este elemento del vector*/

void eliminar_maquina(struct notebook **inventario, int *tamano){

    int eliminar;
    cargar_datos(*inventario, *tamano);
    printf("Cual desea eliminar: ");
    scanf("%d",&eliminar);

    if (eliminar <= *tamano && eliminar > 0)
    {
        for (int i = eliminar -1 ; i < *tamano; i++)
    {
        (*inventario)[i] = (*inventario)[i + 1];
    }
        *tamano -= 1;
        *inventario = realloc(*inventario, (*tamano) * sizeof(struct notebook));
        printf("Datos eliminador correctamente...");
        return;
    }else
    {
        printf("Opción no valida...");
        return;
    }
    
}


/*Se solicita hacer una funcion que permita guardar los elementos del vector
de estructuras de un archivo binario (notebooks.dat)*/


void guardar_binario(struct notebook *inventario, int cantidad) {
    if (inventario == NULL || cantidad == 0) {
        printf("No hay datos para guardar.\n");
        return;
    }

    // "wb" significa Write Binary (Escritura Binaria)
    FILE *archivo = fopen("inventario.dat", "wb");

    if (archivo == NULL) {
        printf("Error al abrir el archivo para escribir.\n");
        return;
    }

    // Escribimos todos los elementos de una sola vez
    // fwrite(puntero_datos, tamaño_de_cada_uno, cuántos_hay, archivo)
    size_t escritos = fwrite(inventario, sizeof(struct notebook), cantidad, archivo);

    if (escritos == cantidad) {
        printf("\nSe guardaron %d registros correctamente en 'inventario.dat'.\n", cantidad);
    } else {
        printf("\nError parcial al guardar los datos.\n");
    }

    fclose(archivo);
}

/*Se solicita hacer una funcion que permita cargar los elementos en el vector
de estructuras de un archivo binario (notebooks.dat)*/

void cargar_desde_binario(struct notebook **inventario, int *cantidad) {
    FILE *archivo = fopen("inventario.dat", "rb");
    
    if (archivo == NULL) {
        printf("No se encontro un archivo previo (inventario.dat).\n");
        return;
    }

    // 1. Averiguar el tamaño del archivo para calcular la cantidad de registros
    fseek(archivo, 0, SEEK_END); // Ir al final del archivo
    long tamano_archivo = ftell(archivo); // Obtener la posicion actual (total de bytes)
    rewind(archivo); // Volver al inicio para empezar a leer

    // 2. Calcular cuántas estructuras notebook caben en ese tamaño
    *cantidad = tamano_archivo / sizeof(struct notebook);

    if (*cantidad > 0) {
        // 3. Asignar memoria para todos los registros encontrados
        *inventario = (struct notebook *)malloc((*cantidad) * sizeof(struct notebook));
        
        if (*inventario == NULL) {
            printf("Error de memoria al cargar.\n");
            fclose(archivo);
            return;
        }

        // 4. Leer todos los datos y meterlos en el vector
        fread(*inventario, sizeof(struct notebook), *cantidad, archivo);
        printf("\n>>> Exito: Se cargaron %d registros desde el archivo.\n", *cantidad);
    } else {
        printf("El archivo esta vacio.\n");
    }

    fclose(archivo);
}