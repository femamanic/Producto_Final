#include "CajaRegistradora.h"
#include <iostream>

using namespace std;

void menuCajaRegistradora() {
    int opcion;
    do {
        system ("cls");
        cout << "+---------------------------------+\n";
        cout << "|        Caja Registradora        |\n";
        cout << "+---------------------------------+\n";
        cout << "| [1] Buscar producto             |\n";
        cout << "| [2] Mostrar productos           |\n";
        cout << "| [3] Agregar producto al carrito |\n";
        cout << "| [4] Imprimir recibo             |\n";
        cout << "| [0] Regresar                    |\n";
        cout << "+---------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                buscarProducto();
                break;
            case 2:
                mostrarRegistroDeProductos();
                break;
            case 3:
                agregarProductoAlCarrito();
                break;
            case 4:
                imprimirRecibo();
                break;
            case 0:
                system ("cls");
                cout << " Regresando...\n";
                system ("pause>nul");
                break;
            default:
                cout << " Opcion invalida\n";
                system ("pause>nul");
                break;
        }
    } while (opcion != 0);
}