#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void buscarProducto () {
    string m;
    int n,c=0;
    do{
     system ("cls");
    cout << "+---------------------------------+\n";
    cout << "|          Buscar Producto        |\n";
    cout << "+---------------------------------+\n";
    cout << "| [1] Por nombre                  |\n";
    cout << "| [2] Por categoria               |\n";
    cout << "| [3] Por marca                   |\n";
    cout << "| [4] Por precio                  |\n";
    cout << "| [0] Regresar                    |\n";
    cout << "+---------------------------------+\n";
    cout << "elija una opcion: ";cin>>n;
    switch (n)
    {
    case 1:
        cin.ignore( );
        cout<<"ingrese el nombre del rpoducto a buscar: ";
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 0:
        break;
    default:
        cout<<"ERROR: OPCION INVALIDA"<<endl;
        cout<<"intente otra vez."<<endl;
        c++;
        break;
    }
    if(n>3){
        cout<<"unted ha superado la maxima cantidad de intentos erroneos."<<endl;
        n=0;
    }
    }while(n!=0);
}