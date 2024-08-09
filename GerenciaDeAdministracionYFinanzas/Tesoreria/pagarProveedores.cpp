#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
#include <iostream>

using namespace std;

void pagarProveedores() {
    cout << "+--------------------------------+\n";
    cout << "|         Pagar Proveedores      |\n";
    cout << "+--------------------------------+\n";
    for (int i = 0; i < numeroProductos; i++) {
        cout << "Pagando por: " << producto[i].nombre << " - s/" << producto[i].precioCosto * producto[i].cantidad << endl;
    }
    cout << "Todos los pagos a proveedores han sido procesados." << endl;
}