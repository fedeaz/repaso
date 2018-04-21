

int buscarLibre(int[], int);

/** \brief muestra los productos en forma de lista
 *
 * \param int[] ids
 * \param char[][50] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
 * \param int cantidad de elementos de la lista
 * \return void
 *
 */
void mostrarProductos(int[], char[][50], int[], float[], int);
void ordenarProductos(int[], char[][50], int[], float[], int);
void modificar (int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant);
void darDeBaja(int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant);
