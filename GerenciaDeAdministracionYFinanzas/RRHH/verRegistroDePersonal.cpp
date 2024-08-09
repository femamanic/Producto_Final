#include<iostream>
#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
using namespace std;
void verRegistroDePersonal(){
    cout << "+---------------------------------+\n";
    cout << "|      Registro de Personal       |\n";
    cout << "+---------------------------------+\n";
    for(int i=0;i<numeroEmpleados;i++){
        cout<<"["<<i+1<<"] "<<empleado[i].nombre<<endl;
        cout<<"DNI: "<<empleado[i].DNI<<endl;
        cout<<"Codigo: "<<empleado[i].codigo<<endl;
        cout<<"correo: "<<empleado[i].correo<<endl;
        cout<<"Telefono: "<<empleado[i].telefono<<endl;
        cout<<"Edad: "<<empleado[i].edad<<endl;
        cout<<"Horas de trabajo: "<<empleado[i].horasDeTrabajo<<endl;
    }
    cout<<"SE COMPLETO CORRECTAMENTE."<<endl;
}