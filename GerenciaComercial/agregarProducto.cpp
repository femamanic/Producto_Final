#include "GerenciaComercial.h"
#include <iostream>
#include "../variables.h"
using namespace std;

void agregarProducto(){
    system("cls");
    cout << "+------------------------------------------------------------------+" << endl;
    cout << "|                       Agregar Productos                          |" << endl;
    cout << "+------------------------------------------------------------------+" << endl;
    int n;
    cout << " Ingrese la cantidad de productos que desea agregar: ";cin>>n;
    for(int i = 0; i < n; i++){
        cout << "+------------------------------------------------------------------+" << endl;
        cin.ignore();
        cout << " Ingrese el nombre del nuevo producto: "; getline(cin, producto[numeroProductos].nombre);
        cout << " Ingrese la categoria del nuevo producto: "; getline(cin, producto[numeroProductos].categoria);
        cout << " Ingrese la marca del nuevo producto: "; getline(cin, producto[numeroProductos].marca);
        cout << " Ingrese el codigo del nuevo producto: ";cin>>producto[numeroProductos].codigo;
        cout << " Ingrese el precio del nuevo producto: ";cin>>producto[numeroProductos].precio;
        cout << " Ingrese el costo del nuevo producto: ";cin>>producto[numeroProductos].costo;
        cout << " Ingrese las unidades del nuevo producto: ";cin>>producto[numeroProductos].unidadesEnAlmacen;
        numeroProductos = numeroProductos + 1;
    }
    cout << "+------------------------------------------------------------------+" << endl;
    cout << " Producto agregado con exito."<<endl;
    system("pause>nul");
}