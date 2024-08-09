#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void agregarProductoAlCarrito() {
    string prod;
    int opcion, cant;
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
                cout << "Cantidad: "; cin >> cant;
                for (int i = 0; i < numeroProductos; i++) {
                    if (producto[i].nombre == prod) {
                        carrito[numerocarrito].nombre = producto[i].nombre;
                        carrito[numerocarrito].codigo = producto[i].codigo;
                        carrito[numerocarrito].precio = producto[i].precio;
                        carrito[numerocarrito].cantidad = cant;
                        carrito[numerocarrito].total = producto[i].precio * cant;
                        numerocarrito++;
                        cout << "Agregando " << prod << " al carrito...\n";
                        break;
                    }
                }
                system ("pause>nul");
            case 2:
                cout << "Codigo del producto: "; cin >> prod;
                cout << "Cantidad: "; cin >> cant;
                for (int i = 0; i < numeroProductos; i++) {
                    if (producto[i].codigo == prod) {
                        carrito[numerocarrito].nombre = producto[i].nombre;
                        carrito[numerocarrito].codigo = producto[i].codigo;
                        carrito[numerocarrito].precio = producto[i].precio;
                        carrito[numerocarrito].cantidad = cant;
                        carrito[numerocarrito].total = producto[i].precio * cant;
                        numerocarrito++;
                        cout << "Agregando " << prod << " al carrito...\n";
                        break;
                    }
                }
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