#include "GerenciaComercial.h"
#include <iostream>
#include <string>
#include "../variables.h"
using namespace std;

void comprarProducto() {
    cout << "+-----------------------------------+" << endl;
    cout << "|         Comprar Productos         |" << endl;
    cout << "+-----------------------------------+" << endl;
    string cod;
    int cant;
    cout << "Ingrese el codigo del producto que desea comprar: ";cin >> cod;
    cout << "Ingrese la cantidad que desea comprar: ";cin >> cant;

    for (int i = 0; i < numeroProductos; i++) {
        if (producto[i].codigo == cod) {
            if (producto[i].cantidad >= cant) {
                producto[i].cantidad -= cant;
                cout << "Compra realizada con exito."<<endl;
                return;
            } else {
                cout << "No hay suficiente stock del producto."<<endl;
                return;
            }
        }
    }

    cout << "Producto no encontrado."<<endl;
}