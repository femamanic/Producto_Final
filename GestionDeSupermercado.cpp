#include <iostream>
#include "./GerenciaGeneral/GerenciaGeneral.h"
#include "./GerenciaDeAdministracionYFinanzas/AdministracionYFinanzas.h"
#include "./GerenciaComercial/GerenciaComercial.h"
#include "./CajaRegistradora/CajaRegistradora.h"
#include "variables.h"
#include "./DataBase/DataBase.h"

using namespace std;

int main () {
    DatabaseEmpleados();
    DatabaseProductos();
    DatabaseCaja();
    string cod, password;
    bool confirm = false;
    do {
        system ("cls");
        cout << "+-------------------------------+\n";
        cout << "|          Registrarse          |\n";
        cout << "+-------------------------------+\n";
        cout << " USER: "; cin >> cod;
        cout << " PASSWORD: "; cin >> password;
        cout << "+-------------------------------+\n";
        for (int i = 0; i < numeroEmpleados; i++) {
            if (empleado[i].codigo == cod && empleado[i].contra == password) {
                system ("cls");
                cout << " Bienvenido . . .\n " << empleado[i].nombre << "\n";
                system ("pause>nul");
                confirm = true;
                if (empleado[i].cargo == "Gerente General") {
                    menuGerenciaGeneral();
                } else if (empleado[i].cargo == "Contador") {
                    menuContabilidad();
                } else if (empleado[i].cargo == "Gerente de Tienda") {
                    menuGerenteDeTienda();
                } else if (empleado[i].cargo == "Cajero") {
                    menuCajaRegistradora();
                } else if (empleado[i].cargo == "RRHH") {
                    menuRRHH();
                } else if (empleado[i].cargo == "Tesoreria") {
                    menuTesoreria();
                }
                break; 
            }
        }
            if (!confirm) {
                cout << " User o password incorrecto . . .\n";
                system ("pause>nul");
            }
    } while (cod != "exit" && password != "confirm");
    return 0;
}