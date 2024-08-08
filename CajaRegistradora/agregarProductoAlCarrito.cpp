#include "CajaRegistradora.h"
#include <iostream>

using namespace std;

void agregarProductoAlCarrito() {
    string producto;
    int opcion;
    do {
        system ("cls");
        cout << "+---------------------------------+\n";
        cout << "|    Agregar producto al carrito  |\n";
        cout << "+---------------------------------+\n";
        cout << "| [1] Agregar producto por nombre |\n";
        cout << "| [2] Agregar producto por codigo |\n";
        cout << "| [0] Regresar                    |\n";
        cout << "+---------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Nombre del producto: "; cin >> producto;
                cout << "Agregando " << producto << " al carrito...\n";
                system ("pause>nul");
                break;
            case 2:
                cout << "Codigo del producto: "; cin >> producto;
                cout << "Agregando producto con codigo " << producto << " al carrito...\n";
                system ("pause>nul");
                break;
            case 0:
                system ("cls");
                cout << "Regresando...\n";
                system ("pause>nul");
                break;
            default:
                cout << "Opcion invalida\n";
                system ("pause>nul");
                break;
        }
    } while (opcion != 0);
}