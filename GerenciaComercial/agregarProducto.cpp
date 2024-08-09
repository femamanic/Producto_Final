#include "GerenciaComercial.h"
#include<iostream>
#include"structs.h"
using namespace std;

void AgregarProducto(){
    cout << "+-----------------------------------+" << endl;
    cout << "|         Agregar Productos         |" << endl;
    cout << "+-----------------------------------+" << endl;
int n;
    cout << "Ingrese la cantidad de productos que desea agregar: ";cin>>n;
    for(int i = 0; i < n; i++){
    nProductos = nProductos + 1;
    cin.ignore();
    cout << "Ingrese el nombre del nuevo producto: "; getline(cin, producto[nProductos].nombre);
    cout << "Ingrese la categoria del nuevo producto: "; getline(cin, producto[nProductos].categoria);
    cout << "Ingrese la marca del nuevo producto: "; getline(cin, producto[nProductos].marca);
    cout << "Ingrese la cantidad del nuevo producto: ";cin>>producto[nProductos].cantidad;
    cout << "Ingrese el codigo del nuevo producto: ";cin>>producto[nProductos].codigo;
    cout << "Ingrese el precio del nuevo producto: ";cin>>producto[nProductos].precio;
    cout << "Ingrese el costo del nuevo producto: ";cin>>producto[nProductos].costo;
    cout << "Ingrese las unidades del nuevo producto: ";cin>>producto[nProductos].unidadesEnAlmacen;
    cout << "Producto agregado con exito."<<endl;
    }
}