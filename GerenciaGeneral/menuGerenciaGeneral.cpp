#include "GerenciaGeneral.h"
#include "../CajaRegistradora/CajaRegistradora.h"
#include "../GerenciaComercial/GerenciaComercial.h"
#include "../GerenciaDeAdministracionYFinanzas/AdministracionYFinanzas.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void menuGerenciaGeneral() {
     int n;
     int c=0;
    do {
        system ("cls");
        cout << "+---------------------------------+\n";
        cout << "|         Gerente General         |\n";
        cout << "+---------------------------------+\n";
        cout << "| [1] menuGerenteDeTienda         |\n";
        cout << "| [2] menuCajaRegistradora        |\n";
        cout << "| [3] menuContabilidad            |\n";
        cout << "| [4] menuTesoreria               |\n";
        cout << "| [5] menuRRHH                    |\n";
        cout << "| [0] Regresar                    |\n";
        cout << "+---------------------------------+\n";
        cout << " Opcion: "; cin >> n;
        switch (n) {
            case 1:
                menuGerenteDeTienda();
                break;
            case 2:
                menuCajaRegistradora();
                break;
            case 3:
                menuContabilidad();
                break;
            case 4:
                menuTesoreria();
                break;
            case 5:
                menuRRHH();
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