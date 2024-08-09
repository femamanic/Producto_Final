#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void agregarProductoAlCarrito() {
    string prod;
    int opcion;
    do {
        system ("cls");
        cout << "+---------------------------------+\n";
        cout << "|   Agregar producto al carrito   |\n";
        cout << "+---------------------------------+\n";
        cout << "| [1] Agregar producto por nombre |\n";
        cout << "| [2] Agregar producto por codigo |\n";
        cout << "| [0] Regresar                    |\n";
        cout << "+---------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                system ("cls");
                cout << "Nombre del producto: "; cin >> prod;
                for (int i = 0; i < numeroProductos; i++) {
                    if (producto[i].nombre == prod) {
                        ventasMensuales[diaAct][semanaAct] += producto[i].precio;
                        ventasAnuales[mesAct][anioAct] += producto[i].precio;
                        cout << "Agregando " << prod << " al carrito...\n";
                        break;
                    }
                }
                system ("pause>nul");
            case 2:
                cout << "Codigo del producto: "; cin >> prod;
                cout << "Agregando producto con codigo " << prod << " al carrito...\n";
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