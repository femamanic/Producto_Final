#include "GerenciaComercial.h"
#include<iostream>
using namespace std;

void MostrarInventario() {
    cout << "+-----------------------------------+" << endl;
    cout << "|         Registro de Inventario    |" << endl;
    cout << "+-----------------------------------+" << endl;

    for (int i = 0; i < numeroProductos; i++) {
        cout << "Codigo: " << producto[i].codigo << endl;
        cout << "Nombre: " << producto[i].nombre << endl;
        cout << "Categoria: " << producto[i].categoria << endl;
        cout << "Marca: " << producto[i].marca << endl;
        cout << "Tipo: " << producto[i].tipo << endl;
        cout << "Cantidad: " << producto[i].cantidad << endl;
        cout << "Precio: " << producto[i].precio << endl;
        cout << "Costo: " << producto[i].costo << endl;
        cout << "Unidades: " << producto[i].unidadesEnAlmacen << endl;
        cout << "+-----------------------------------+" << endl;
    }

    if (numeroProductos == 0) {
        cout << "No hay productos en el inventario." << endl;
    }
}
