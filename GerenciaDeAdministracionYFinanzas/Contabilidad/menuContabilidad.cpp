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
        cout << "| [1] Aprobar sueldos           |\n";
        cout << "| [0] Regresar                  |\n";
        cout << "+-------------------------------+\n";
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                aprobarSueldos();
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