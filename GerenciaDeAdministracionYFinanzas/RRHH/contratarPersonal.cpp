#include <iostream>
#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
using namespace std;
void contratarPersonal(){
    int n;
    system("cls");
    cout << "+----------------------------------------------------------------+\n";
    cout << "|                     Contratar Personal                         |\n";
    cout << "+----------------------------------------------------------------+\n";
    cout << " Elija cuantas personas desea contratar: ";cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore( );
        cout<<" Ingrese el Nombre y Apellido: ";getline(cin,empleado[numeroEmpleados].nombre);
        cout<<" Ingrese el DNI: ";cin>>empleado[numeroEmpleados].DNI;
        cout<<" Ingrese el codigo: ";cin>>empleado[numeroEmpleados].codigo;
        cout<<" Ingrese la contrasenia: ";cin>>empleado[numeroEmpleados].contra;
        cout<<" Ingrese el correo electronico: ";cin>>empleado[numeroEmpleados].correo;
        do{
            cout<<" Ingrese el telefono movil: ";cin>>empleado[numeroEmpleados].telefono;
            if(empleado[numeroEmpleados].telefono.length()!=9){
                cout<<" ERROR: NUMERO INVALIDO"<<endl;
            }
        }while(empleado[numeroEmpleados].telefono.length()!=9);
        cout<<" Ingrese la edad: ";cin>>empleado[numeroEmpleados].edad;
        cout<<" Ingrese el salario: ";cin>>empleado[numeroEmpleados].salario;
        cout<<" Ingrese el cargo: ";cin>>empleado[numeroEmpleados].cargo;
        cout<<" Ingrese horas de trabajo: ";cin>>empleado[numeroEmpleados].horasDeTrabajo;
        numeroEmpleados=numeroEmpleados+1;
        cout << "+----------------------------------------------------------------+\n";
    }
    cout << " Personal contratado con exito."<<endl;
    system("pause>nul");
}