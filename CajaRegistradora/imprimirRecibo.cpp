#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;   

void imprimirRecibo () {
    system ("cls");
    float TotalTotal = 0;
    int opcion;
    cout << "+-----------------------------------------------------+" << endl;
    cout << "|                   Recibo de Compra                  |" << endl;
    cout << "+-----------------------------------------------------+" << endl;
    for (int i = 0; i < numerocarrito; i++) {
        
        cout << " " << producto[0].nombre << " " << producto[0].marca << endl;
        cout << " Precio: S/. " << carrito[i].precio << " Cantidad: " << carrito[i].cantidad << endl;
        cout << " Total: S/. " << carrito[i].total << endl;
        TotalTotal = TotalTotal + carrito[i].total;
        cout << "+-----------------------------------------------------+" << endl;
    }
    cout << " Total a pagar: S/. " << TotalTotal << endl;
    cout << "+-----------------------------------------------------+" << endl;
    do {
        cout << " [1] Pagar" << endl;
        cout << " [2] Regresar" << endl;
        cout << " [0] Cancelar" << endl;
        cout << " Opcion: "; cin >> opcion;
        switch (opcion) {
            case 1:
                cout << " Pagando..." << endl;
                caja = caja + TotalTotal;
                numerocarrito = 0;
                system ("pause>nul");
                break;
            case 2:
                cout << " Regresando..." << endl;
                system ("pause>nul");
                break;
            case 0:
                cout << " Cancelando..." << endl;
                numerocarrito = 0;
                system ("pause>nul");
                break;
            default:
                cout << " Opcion invalida" << endl;
                system ("pause>nul");
                break;
        }
    } while (opcion != 0 && opcion != 1 && opcion != 2);
}
