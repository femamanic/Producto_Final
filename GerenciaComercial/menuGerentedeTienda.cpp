#include "GerenciaComercial.h"
#include <iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;

    do {
    	system("cls");
        cout << "+--------------------------------+\n";
        cout << "|		Menu Gerente de Tienda    |\n";
        cout << "+--------------------------------+\n";
        cout << "| [1] Comprar Producto           |\n";
        cout << "| [2] Agregar Producto           |\n";
        cout << "| [3] Eliminar Producto          |\n";
        cout << "| [4] Mostrar Inventario         |\n";
        cout << "| [5] Modificar Invenratio       |\n";
        cout << "| [6] Salir                      |\n";
        cout << "+--------------------------------+\n";
        cout << " Opcion: ";cin >> opcion;
     
        switch (opcion) {
        case 1:
            void ComprarProducto();//Comprar Producto
            break;
        case 2:
            void AgregarProducto();//Agregar Producto
            break;
        case 3:
            void EliminarProducto();//Eliminar Producto
            break;
        case 4:
            void MostrarInventario();//AÃ±adir Descuentos u ofertas
            break;
        case 5: 
            void ModificarProducto();//Hacer modificaciones al producto
        case 6:
            cout<<"Saliendo..."<<endl;//Salir
            break;
        default:
            cout<<"Opcion Invalida"<<endl;//Opcion no valida
            }
        } while (opcion != 6);
}