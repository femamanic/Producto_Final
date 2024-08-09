#include "../AdministracionYFinanzas.h"
#include <iostream>
#include "../../variables.h"

using namespace std;

void aprobarSueldos() {
   system ("cls");
    int opcion;
    cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                 Aprobar Sueldos                           |" << endl;
    cout << "+-----------------------------------------------------------+" << endl;
    for (int i = 0; i < numeroEmpleados; i++) {
        cout << "[" << i+1 << "] Codigo: " << empleado[i].codigo;
        cout << "\n Nombre: " << empleado[i].nombre << endl;
        cout << " Cargo: " << empleado[i].cargo << endl;
        cout << " Sueldo: S/." << empleado[i].salario << endl;
        cout << "+-----------------------------------------------------------+" << endl;
        cout << " ¿Aprobar sueldo? : \n";
        cout << " [1] Si \n [2] No \n";
        cout << "+-----------------------------------------------------------+" << endl;
        cout << " Opcion: "; cin >> opcion;
        if (opcion == 1) {
            empleado[i].sueldoAprobado = true;
        }
    } 
    system ("pause>nul");
}