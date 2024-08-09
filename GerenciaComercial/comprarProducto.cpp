#include "GerenciaComercial.h"
#include<iostream>
#include <string>
using namespace std;

void ComprarProducto() {
    int codigo, cantidad;
    cout << "Ingrese el cÃ³digo del producto que desea comprar: ";cin >> codigo;
    cout << "Ingrese la cantidad que desea comprar: ";cin >> cantidad;

    for (int i = 0; i < nProductos; i++) {
        if (producto[i].codigo == codigo) {
            if (producto[i].cantidad >= cantidad) {
                producto[i].cantidad -= cantidad;
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