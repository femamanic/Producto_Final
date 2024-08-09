#include "GerenciaComercial.h"
#include <iostream>
#include <string>
#include "../variables.h"
using namespace std;

void comprarProducto() {
    system ("cls");
    cout << "+------------------------------------------------------+" << endl;
    cout << "|                 Comprar Productos                    |" << endl;
    cout << "+------------------------------------------------------+" << endl;
    string cod;
    int cant;
    bool encontrado = false;
    cout << " Ingrese el codigo del producto que desea comprar: \n ";cin >> cod;
    cout << " Ingrese la cantidad que desea comprar: \n ";cin >> cant;
    cout << "+------------------------------------------------------+" << endl;
    for (int i = 0; i < numeroProductos; i++) {
        if (producto[i].codigo == cod) {
            encontrado = true;
            producto[i].unidadesEnAlmacen = producto[i].unidadesEnAlmacen + cant;
            cout << " Producto: " << producto[i].nombre << endl;
            cout << " Cantidad: " << cant << endl;
            cout << " Costo: " << producto[i].costo << endl;
            cout << " Total: " << producto[i].costo * cant << endl;   
            cout << " Unidades en almacen: " << producto[i].unidadesEnAlmacen << endl;
            cout << "+------------------------------------------------------+" << endl;
            cout << " Producto adquirido con exito."<<endl;
            compraProveedores = compraProveedores + (producto[i].costo * cant);
            break;
        }
    }
    if (!encontrado) {
        cout << " Producto no encontrado."<<endl;
    }
    system ("pause>nul");
}