#include "../AdministracionYFinanzas.h"
#include <iostream>

using namespace std;

void menuContabilidad() {
    int opcion;
    do {
        system ("cls");
        cout << "+-------------------------------+\n";
        cout << "|          Contabilidad         |\n";
        cout << "+-------------------------------+\n";
        cout << "| [1] Ver reporte de ventas     |\n";
        cout << "| [2] Ver reporte de compras    |\n";
        cout << "| [0] Regresar                  |\n";
        cout << "+-------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                verReporteDeVentas();
                break;
            case 2:
                verReporteDeCompras();
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