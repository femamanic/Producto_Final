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
        if (empleado[i].sueldoAprobado == false) {
            cout << "[" << i+1 << "] Codigo: " << empleado[i].codigo;
            cout << "\n Nombre: " << empleado[i].nombre << endl;
            cout << " Cargo: " << empleado[i].cargo << endl;
            cout << " Sueldo: S/." << empleado[i].salario << endl;
            cout << "+-----------------------------------------------------------+" << endl;
            cout << " Aprobar sueldo? : \n";
            cout << " [1] Si \n [2] No \n [0] Salir \n";
            cout << "+-----------------------------------------------------------+" << endl;
            cout << " Opcion: "; cin >> opcion;
            if (opcion == 1) {
                empleado[i].sueldoAprobado = true;
            } else if (opcion == 2) {
                empleado[i].sueldoAprobado = false;
            } else if (opcion == 0) {
                break;
            } else {
                cout << " Opcion invalida\n";
            }
        }
    } 
    system ("pause>nul");
}