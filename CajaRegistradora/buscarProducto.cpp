#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void buscarProducto () {
    string m;
    int n,c=0,h;
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
        cout<<"ingrese el nombre del rpoducto a buscar: ";getline(cin, m);
        for(int i=0;i<numeroProductos;i++){
            if(producto[i].nombre==m){
                if(producto[i].unidadesEnAlmacen<=0){
                    cout<<"el producto que acaba de buscar ya no hay en el almacen."<<endl;
                }
                cout<<"el numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
            }
        }
        break;
    case 2:
        cin.ignore( );
        cout<<"ingrese la categoria del producto: ";getline(cin, m);
        for(int i=0;i<numeroProductos;i++){
            if(producto[i].categoria==m){
                cout<<"el nombre del producto es: "<<producto[i].nombre<<endl;
                if(producto[i].unidadesEnAlmacen<=0){
                    cout<<"el producto que acaba de buscar ya no hay en el almacen."<<endl;
                }
                cout<<"el numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
            }
        }
        break;
    case 3:
        cout<<"ingrese la marca del producto: ";getline(cin,m);
        for(int i=0;i<numeroProductos;i++){
            if(producto[i].marca==m){
                cout<<"el nombre del producto es: "<<producto[i].nombre<<endl;
                if(producto[i].unidadesEnAlmacen<=0){
                    cout<<"el producto que usted buscar ya no hay en el almacen."<<endl;
                }else{
                    cout<<"El numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                }
            }
        }
        break;
    case 4:
        cout<<"ingrese el precio del producto: ";cin>>h;
        for(int i=0;i<numeroProductos;i++){
            if(producto[i].precio==h){
                cout<<"el nombre del producto es: "<<producto[i].nombre<<endl;
                if(producto[i].unidadesEnAlmacen<=0){
                    cout<<"el producto que acaba de buscar se vendio todo."<<endl;
                }else{
                cout<<"el numero de unidades diponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                }
            }
        }
        break;
    case 0:
        cout<<"REGRESANDO..."<<endl;
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