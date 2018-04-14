#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int buscarLibre(int[], int);

/** \brief muestra los productos en forma de lista
 *
 * \param int[] ids
 * \param char[][30] descripciones
 * \param int[] stock
 * \param float[] precio
 * \param int cantidad
 * \return void
 *
 */
void mostrarProductos(int[], char[][30],int[],float[],int);

/** \brief ordena la funcion por orden alfabetico
 *
 * \param char[][30] descripciones
 * \return void
 *
 */
void ordenarProductos(int idProducto [], char descripcion[][30],int stock [],float precioUnitaro [],int cantidad);

