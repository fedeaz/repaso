#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "productos.h"

#define MAX 2




int main()
{
    int idProducto[MAX]={};
    char descripcion[MAX] [30];
    int stock[MAX];
    float precioUnitaro[MAX];
    int opcion = 0;
    char seguir = 's';
    char seguirW ='y';
    int posicion;
    int i;
    int resultado;


    do{
    printf("1- cargar  \n ");
    printf("2- mostrar \n ");
    printf("3- ordenar \n ");
    printf("4- salir \n");

     scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            resultado = buscarLibre(idProducto, MAX);
            printf("primer llibre %d \n",resultado);

            if(resultado == 0)
            {
                printf("ingrese la posicion\n");
                scanf("%d", &posicion);

                printf("ingrese id \n ");
                scanf("%d", &idProducto[posicion-1]);

                printf("ingrese descripcion \n ");
                fflush(stdin);
                scanf("%[^\n]", descripcion[posicion-1]);


                printf("ingrese stock \n ");

                scanf("%d", &stock[posicion-1]);

                printf("ingrese precio \n ");

                scanf("%f", &precioUnitaro[posicion-1]);

                printf("desea continuar ? (s/n) ");
                seguir = getche();

            break;
            }
            else
            {
                printf("no hay espacio disponible");
                break;
            }



        case 2:
            printf("mostrar \n");
            for(i=0; i< MAX; i++)
            {
                mostrarProductos(idProducto, descripcion, stock, precioUnitaro, MAX);
            }

            break;

        case 3:
            break;

        case 4:
            seguirW = 'n';
            break;

        }
    }while(seguirW == 'y');

  return 0;

}
