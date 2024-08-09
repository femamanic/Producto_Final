#include<iostream>
#include "../AdministracionYFinanzas.h"
using namespace std;
void menuRRHH(){
     int n;
     int c=0;
    do {
        system ("cls");
        cout << "+---------------------------------+\n";
        cout << "|        Caja Registradora        |\n";
        cout << "+---------------------------------+\n";
        cout << "| [1] contratarPersonal           |\n";
        cout << "| [2] despedirPersonal            |\n";
        cout << "| [3] verRegistroDePersonal       |\n";
        cout << "| [0] Regresar                    |\n";
        cout << "+---------------------------------+\n";
        cout << " Opcion: "; cin >> n;
        switch (n) {
            case 1:
                contratarPersonal();
                break;
            case 2:
                despedirPersonal();
                break;
            case 3:
                verRegistroDePersonal();
                break;
            case 0:
                system ("cls");
                cout << "Regresando...\n";
                system ("pause>nul");
                break;
            default:
                cout << "Opcion invalida\n";
                c++;
                system ("pause>nul");
                break;
        }
        if(c>3){
            cout<<"usted ha excedido el total de intentos."<<endl;
            cout<<"se procedera a salir de la funcion...."<<endl;
            n=0;
        }
    } while (n != 0);
}