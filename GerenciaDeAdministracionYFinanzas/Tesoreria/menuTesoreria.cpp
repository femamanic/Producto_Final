#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
#include <iostream>

using namespace std;
    void menuTesoreria() {
    int opcion;

    do {
        system("cls");
        cout << "+--------------------------------+\n";
        cout << "|         Menu Tesoreria         |\n";
        cout << "+--------------------------------+\n";
        cout << "| [1] Pagar Sueldos              |\n";
        cout << "| [2] Pagar Proveedores          |\n";
        cout << "| [3] Ver Dinero en Caja         |\n";
        cout << "| [0] Salir                      |\n";
        cout << "+--------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;

        switch (opcion) {
        case 1:
            pagarSueldos();  // Funcion de pagar sueldo
            break;
        case 2:
            pagarProveedores();  // Funcion de pagar Proveedores
            break;
        case 3:
            cout << "Dinero en Caja: S/. " << caja << endl;  // Ver dinero en caja
            system("pause>nul");
            break;
        case 0:
            cout << "Saliendo..." << endl;  // Salir
            break;
        default:
            cout << "Opcion Invalida" << endl;  // Opción no válida
        }
    } while (opcion != 3);
}
