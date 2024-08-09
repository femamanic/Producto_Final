#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
#include <iostream>

using namespace std;

void pagarSueldos() {
    cout << "+--------------------------------+\n";
    cout << "|         Pagar Sueldos          |\n";
    cout << "+--------------------------------+\n";
    for (int i = 0; i < numeroEmpleados; i++) {
        if (empleado[i].sueldoAprobado == true) {
            cout << " Pagando a " << empleado[i].nombre << "\n S/. " << empleado[i].salario << endl;
            caja = caja - empleado[i].salario;
            cout << "+--------------------------------+\n";
        }
    }
    cout << " Dinero de la Caja: S/. " << caja << endl;
    cout << "Todos los sueldos han sido pagados." << endl;
    system("pause>nul");
}