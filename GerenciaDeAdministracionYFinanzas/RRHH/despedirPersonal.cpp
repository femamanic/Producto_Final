#include <iostream>
#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
using namespace std;
void despedirPersonal(){
    int n;
    string m;
    cout << "+---------------------------------+\n";
    cout << "|         Despedir Personal       |\n";
    cout << "+---------------------------------+\n";
    cout<<"ingrese el total de personal a despedir: ";cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore( );
        cout<<"ingrese el codigo del empleado a desperdir: ";(cin, m);
        for(int j=0;j<numeroEmpleados;j++){
            if(empleado[j].codigo==m){
                cout<<"el empleado a despedir es: "<<empleado[j].nombre<<endl;
                for(int a=j;a<numeroEmpleados-1;a++){
                    empleado[a] = empleado[a+1];
                }
                numeroEmpleados--;
            }
        }
    }
    cout<<"se despidio correctamente."<<endl;
}