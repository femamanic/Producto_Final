#include "GerenciaDeAdministracionYFinanzas.h"
#include<iostream>
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
        cout << "| [3] Salir                      |\n";
        cout << "+--------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;

        switch (opcion) {
        case 1:
            PagarSueldos();  // Funcion de pagar sueldo
            break;
        case 2:
            PagarProveedores();  // Funcion de pagar Proveedores
            break;
        case 3:
            cout << "Saliendo..." << endl;  // Salir
            break;
        default:
            cout << "Opcion Invalida" << endl;  // Opción no válida
        }
    } while (opcion != 3);
}
