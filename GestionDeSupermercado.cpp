#include <iostream>
#include "./GerenciaGeneral/GerenciaGeneral.h"
#include "./GerenciaDeAdministracionYFinanzas/AdministracionYFinanzas.h"
#include "./GerenciaComercial/GerenciaComercial.h"

using namespace std;

int main () {
    string user, password;
    system ("cls");
    cout << "+-------------------------------+\n";
    cout << "|          Registrarse          |\n";
    cout << "+-------------------------------+\n";
    cout << " User: "; cin >> user;
    cout << " Password: "; cin >> password;
    cout << "+-------------------------------+\n";
    return 0;
}