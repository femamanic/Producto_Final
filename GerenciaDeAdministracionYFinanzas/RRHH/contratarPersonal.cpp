#include <iostream>
#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
using namespace std;
void contratarPersonal(){
    int n;
    cout << "+---------------------------------+\n";
    cout << "|        Contratar Personal       |\n";
    cout << "+---------------------------------+\n";
    cout<<"Elija cuantas personas desea contratar: ";cin>>n;
    for(int i=0;i<n;i++){
        numeroEmpleados=numeroEmpleados+1;
        cin.ignore( );
        cout<<"Ingrese el Nombre y Apellido: ";getline(cin,empleado[numeroEmpleados].nombre);
    }
}