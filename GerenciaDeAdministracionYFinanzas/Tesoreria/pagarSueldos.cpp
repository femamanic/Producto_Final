#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
#include <iostream>

using namespace std;

void pagarSueldos() {
    cout << "+--------------------------------+\n";
    cout << "|         Pagar Sueldos          |\n";
    cout << "+--------------------------------+\n";
    for (int i = 0; i < numeroEmpleados; i++) {
        if (!empleado[i].pagado) {
            cout << "Pagando a: " << empleado[i].nombre << " - s/" << empleado[i].salario << endl;
            empleado[i].pagado = true;
        } else {
            cout << "El empleado " << empleado[i].nombre << " ya ha sido pagado." << endl;
        }
    }
    cout << "Todos los sueldos han sido pagados." << endl;
}