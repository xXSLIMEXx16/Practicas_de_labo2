/*Desarrolla un programa que simule un cajero autom´atico. El usuario puede
realizar dep´ositos, retiros y consultar su saldo.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    char mensaje_menu[] = "==================MENU=================\n"
                              "1- Depositar dinero\n"
                              "2- Retirar dinero\n"
                              "3- Consaltar saldo\n"
                              "4- Salir\n"
                              "Ingrese una opción: ";
    bool salir = true;
    int op=0;
    float saldo =0;
    float ingreso =0;
    float retiro =0;

    while (salir)
    {
        printf("%s",mensaje_menu);
        scanf("%d",&op);

        switch (op)    
        {
        case 1:
            
            while (salir)
            {
                printf("Ingrese la cantidad de dinero que quiere depositar: ");
                scanf(" %f",&ingreso);
                if (ingreso > 0)
                    {
                    printf("El deposito fue exitoso...\n");
                    salir = false;
                    saldo += ingreso;

                    }else
                    {
                        printf("ERROR...\nEl saldo debe ser decima y positivo\n");
                        salir = true;
                    }
                    
                
            }
            
            salir = true;

            break;
        case 2:
            
            while (salir)
            {
                printf("Ingrese la cantidad de dinero que quiere retirar: ");
                scanf(" %f",&retiro);

                if (retiro > 0)
                    {
                        if (retiro <= saldo)
                        {
                            printf("El retiro fue exitoso...\n");
                            saldo -= retiro;
                            salir = false;
                            
                        }else
                        {
                            printf("ERROR... Saldo insuficiente\n");
                            salir = false;
                        }
                        
                        

                    }else
                    {
                        printf("ERROR...\nEl saldo debe ser decima y positivo\n");
                        salir = false;
                    }
                    
                
            }
            
            salir = true;

            break;

        case 3:

            printf("Su saldo es de: %.2f \n",saldo);

            break;

        case 4:
            printf("Saliendo del programa...");
            salir = false;
            
            break;


        default:
            printf("Opción incorrecta\n");
            
            break;
        }

    }
    
    return 0;
}
