#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void mostrarRegistroDeProductos () {
        cout << "+-----------------------------------+" << endl;
        cout << "|         Mostrar Productos         |" << endl;
        cout << "+-----------------------------------+" << endl;
    for(int i=0;i<numeroProductos;i++){
        cout<<"["<<i+1<<"] nombre: "<<producto[i].nombre<<endl;
        cout<<"Categoria: "<<producto[i].categoria<<endl;
        cout<<"Marca: "<<producto[i].marca<<endl;
        cout<<"Codigo: "<<producto[i].codigo<<endl;
        cout<<"precio: "<<producto[i].precio<<endl;
        cout<<"Unidades Disponobles: "<<producto[i].unidadesEnAlmacen<<endl;
    }
    cout<<"TODOS LOS PRODUCTOS HAN SIDO MENCIONADOS"<<endl;
    cout<<"regresando..."<<endl;
}