#include "GerenciaComercial.h"
#include <iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;

    do {
    	system("cls");
        cout << "+--------------------------------+\n";
        cout << "|        Gerente de Tienda       |\n";
        cout << "+--------------------------------+\n";
        cout << "| [1] Comprar Producto           |\n";
        cout << "| [2] Agregar Producto           |\n";
        cout << "| [3] Eliminar Producto          |\n";
        cout << "| [4] Mostrar Inventario         |\n";
        cout << "| [5] Modificar Invenratio       |\n";
        cout << "| [0] Salir                      |\n";
        cout << "+--------------------------------+\n";
        cout << " Opcion: ";cin >> opcion;
     
        switch (opcion) {
        case 1:
            comprarProducto();//Comprar Producto
            break;
        case 2:
            agregarProducto();//Agregar Producto
            break;
        case 3:
            eliminarProducto();//Eliminar Producto
            break;
        case 4:
            mostrarRegistroDeInventario();//AÃ±adir Descuentos u ofertas
            break;
        case 5: 
            modificarProducto();//Hacer modificaciones al producto
        case 0:
            cout<<"Saliendo..."<<endl;//Salir
            break;
        default:
            cout<<"Opcion Invalida"<<endl;//Opcion no valida
            break;
        }
        } while (opcion != 0);
}