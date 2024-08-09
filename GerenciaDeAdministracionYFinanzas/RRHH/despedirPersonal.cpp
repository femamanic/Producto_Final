#include <iostream>
#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
using namespace std;
void despedirPersonal(){
    int n;
    string m;
    system("cls");
    cout << "+--------------------------------------------------------+\n";
    cout << "|                 Despedir Personal                      |\n";
    cout << "+--------------------------------------------------------+\n";
    cout << " Ingrese el total de personal a despedir: ";cin>>n;
    cout << "+--------------------------------------------------------+\n";
    for(int i=0;i<n;i++){
        cin.ignore( );
        cout<<" Ingrese el codigo del empleado a desperdir: ";(cin, m);
        for(int j=0;j<numeroEmpleados;j++){
            if(empleado[j].codigo==m){
                cout<<" El empleado a despedir es: "<<empleado[j].nombre<<endl;
                for(int a=j;a<numeroEmpleados-1;a++){
                    empleado[a] = empleado[a+1];
                }
                numeroEmpleados--;
            }
            cout << "+--------------------------------------------------------+\n";
        }
    }
    cout<<" Se despidio correctamente."<<endl;
    system("pause>nul");
}