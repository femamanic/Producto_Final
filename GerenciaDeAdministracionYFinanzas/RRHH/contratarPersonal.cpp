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
        cout<<"ingrese el DNI: ";cin>>empleado[numeroEmpleados].DNI;
        cout<<"ingrese el codigo: ";cin>>empleado[numeroEmpleados].codigo;
        cout<<"ingrese la contraseña: ";cin>>empleado[numeroEmpleados].contra;
        cout<<"ingrese el correo electronico: ";cin>>empleado[numeroEmpleados].correo;
        do{
            cout<<"ingrese el telefono movil: ";cin>>empleado[numeroEmpleados].telefono;
            if(empleado[numeroEmpleados].telefono.length()!=9){
                cout<<"ERROR: NUMERO INVALIDO"<<endl;
            }
        }while(empleado[numeroEmpleados].telefono.length()!=9);
        cout<<"ingrese la edad: ";cin>>empleado[numeroEmpleados].edad;
        cout<<"ingrese horas de trabajo: ";cin>>empleado[numeroEmpleados].horasDeTrabajo;
    }
}