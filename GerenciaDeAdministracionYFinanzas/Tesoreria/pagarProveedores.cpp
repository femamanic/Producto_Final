#include "../AdministracionYFinanzas.h"
#include "../../variables.h"
#include <iostream>

using namespace std;

void pagarProveedores() {
    system ("cls");
    cout << "+--------------------------------+\n";
    cout << "|         Pagar Proveedores      |\n";
    cout << "+--------------------------------+\n";
    cout << " Pagando a proveedores \n S/. " << compraProveedores << endl;
    cout << " Todos los pagos a proveedores han sido procesados." << endl;
    caja = caja - compraProveedores;
    cout << " Dinero de la Caja: S/. " << caja << endl;
    system("pause>nul");
}