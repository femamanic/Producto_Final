#include "GerenciaComercial.h"
#include <iostream>
#include <string>
#include "../variables.h"
using namespace std;

void modificarProducto() {
    string codigo;
    cout << "Ingrese el codigo del producto que desea modificar: "; cin >> codigo;

    int index = -1;
    for (int i = 0; i < numeroProductos; i++) {
        if (producto[i].codigo == codigo) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Producto no encontrado." << endl;
        return;
    }

    int opcion;
    do {
        cout << "+--------------------------------+" << endl;
        cout << "|     Modificar Producto         |" << endl;
        cout << "+--------------------------------+" << endl;
        cout << "| [1] Nombre                     |" << endl;
        cout << "| [2] Categoria                  |" << endl;
        cout << "| [3] Marca                      |" << endl;
        cout << "| [4] Cantidad                   |" << endl;
        cout << "| [5] Precio                     |" << endl;
        cout << "| [6] Costo                      |" << endl;
        cout << "| [7] Unidades                   |" << endl;
        cout << "| [0] Salir                      |" << endl;
        cout << "+--------------------------------+" << endl;
        cout << " Opcion: "; cin >> opcion;

        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Ingrese el nuevo nombre del producto: ";
                getline(cin, producto[index].nombre);
                break;
            case 2:
                cout << "Ingrese la nueva categoria del producto: ";
                getline(cin, producto[index].categoria);
                break;
            case 3:
                cout << "Ingrese la nueva marca del producto: ";
                getline(cin, producto[index].marca);
                break;
            case 4:
                cout << "Ingrese la nueva cantidad del producto: ";
                cin >> producto[index].cantidad;
                break;
            case 5:
                cout << "Ingrese el nuevo precio del producto: ";
                cin >> producto[index].precio;
                break;
            case 6:
                cout << "Ingrese el nuevo costo del producto: ";
                cin >> producto[index].costo;
                break;
            case 7:
                cout << "Ingrese las nuevas unidades del producto: ";
                cin >> producto[index].unidadesEnAlmacen;
                break;
            case 0:
                cout << "Saliendo de la modificación..." << endl;
                break;
            default:
                cout << "Opcion Invalida" << endl;
        }
    } while (opcion != 0);

    cout << "Producto modificado con éxito." << endl;
}
