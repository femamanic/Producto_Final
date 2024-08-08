#include "GerenciaComercial.h"
#include<iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;

    do {
    	system("cls");
        cout << "+--------------------------------+\n";
        cout << "|			caja Registradora	  |\n";
        cout << "+--------------------------------+\n";
        cout << " [1] Comprar Producto			  |\n";
        cout << " [2] Agregar Producto		  	  |\n";
        cout << " [3] Eliminar Producto           |\n";
        cout << " [4] Agregar Promociones         |\n";
        cout << " [5] Salir                       |\n";
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
            void AgregarPromociones();//AÃ±adir Descuentos u ofertas
            break;
        case 5:
            cout<<"Saliendo..."<<endl;//Salir
            break;
        default:
            cout<<"Opcion Invalida"<<endl;//Opcion no valida
            }
        } while (opcion != 5);
}