#include "GerenciaComercial.h"
#include <iostream>
#include <string>
#include "../variables.h"
using namespace std;

void mostrarRegistroDeInventario() {
    system ("cls");
    cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                 Registro de Inventario                    |" << endl;
    cout << "+-----------------------------------------------------------+" << endl;

    for (int i = 0; i < numeroProductos; i++) {
        cout << "[" << i+1 << "] Codigo: " << producto[i].codigo;
        cout << " \tNombre: " << producto[i].nombre << endl;
        cout << " Marca: " << producto[i].marca << endl;
        cout << " Categoria: " << producto[i].categoria << endl;
        cout << " Precio: S/." << producto[i].precio << endl;
        cout << " Costo: S/." << producto[i].costo << endl;
        cout << " Unidades en Almacen: " << producto[i].unidadesEnAlmacen << endl;
        cout << "+-----------------------------------------------------------+" << endl;
    }

    if (numeroProductos == 0) {
        cout << " No hay productos en el inventario." << endl;
    }
    system ("pause>nul");
}
