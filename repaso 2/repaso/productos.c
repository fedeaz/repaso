#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarLibre(int id[], int canidad)
{
    int index = -1;

     for(int i = 0; i<2 ; i++)
     {
       if(id[i] == 0)
       {
            index = i;
            break;

       }
     return index;
     }
}

void mostrarProductos(int idProducto [], char descripcion[][30],int stock [],float precioUnitaro [],int cantidad)
{
    for(int i =0; i < cantidad; i++)
    {
        if (idProducto[i]!=0)
                {


                printf("%5d %20s %5d %5.2f\n", idProducto[i],descripcion[i],stock[i],precioUnitaro[i]);
                }
    }
}


void ordenarProductos(int idProducto [], char descripcion[][30],int stock [],float precioUnitaro [],int cantidad)
{
    int i;
    int j;
    char auxS;
    int auxI;
    float auxF;

    for( i = 0 ;i < cantidad - 1 ;1++)
    {
        for( j= i+1; j<cantidad; j++)
        {
          if ( stricmp(descripcion[i],descripcion[j]>0) )
            {
              strcpy(auxS,descripcion[i]);
              strcpy(descripcion[i],descripcion[j]);
              strcpy(descripcion[j], auxS);

              auxI = idProducto[i];
              idProducto[i] = idProducto[j];
              idProducto[j] = auxI;

              auxI = stock[i];
              stock[i] = stock[j];
              stock[j] = auxI;

              auxF = precioUnitaro[i];
              precioUnitaro[i] = precioUnitaro[j];
              precioUnitaro[j] = auxF;


            }
        }
    }

}

