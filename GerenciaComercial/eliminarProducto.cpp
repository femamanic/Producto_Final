#include "GerenciaComercial.h"
#include <iostream>
#include <string>
#include "../variables.h"
using namespace std;

void eliminarProducto(){
    cout << "+-----------------------------------+" << endl;
    cout << "|         Eliminar Productos        |" << endl;
    cout << "+-----------------------------------+" << endl;
    string codigo;
    cout << "Ingrese el codigo del producto que desea eliminar: ";cin >> codigo;
    int index = -1;
    for(int i = 0; i < numeroProductos; i++) {
        if(producto[i].codigo == codigo) {
            index = i;
            break;
        }
    }
    if(index == -1){
        cout<<"Producto no encontrado."<<endl;
        return;
    }
    for(int i = index; i < numeroProductos - 1; i++){
        producto[i] = producto[i+1];
    }
    cout << "Producto eliminado con exito."<<endl;
}