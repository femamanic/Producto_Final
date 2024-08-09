#include "CajaRegistradora.h"
#include "../variables.h"
#include <iostream>

using namespace std;

void buscarProducto () {
    string m, h;
    int n,c=0;
    do{
     system ("cls");
    cout << "+---------------------------------+\n";
    cout << "|          Buscar Producto        |\n";
    cout << "+---------------------------------+\n";
    cout << "| [1] Por nombre                  |\n";
    cout << "| [2] Por categoria               |\n";
    cout << "| [3] Por marca                   |\n";
    cout << "| [4] Por codigo                  |\n";
    cout << "| [0] Regresar                    |\n";
    cout << "+---------------------------------+\n";
    cout << " Elija una opcion: ";cin>>n;
    system ("cls");
    switch (n) {
        case 1:
            cout<<"+----------------------------------------------+"<<endl;
            cout<<"|         BUSCAR PRODUCTO POR NOMBRE           |"<<endl;
            cout<<"+----------------------------------------------+"<<endl;
            cout<<" Ingrese el nombre del producto a buscar: \n ";getline(cin, m);
            cout<<"+----------------------------------------------+"<<endl;
            for(int i=0;i<numeroProductos;i++){
                if(producto[i].nombre==m){
                    cin.ignore( );
                    cout<<" Nombre: "<<producto[i].nombre<<endl;
                    cout<<" Categoria: "<<producto[i].categoria<<endl;
                    cout<<" Marca: "<<producto[i].marca<<endl;
                    cout<<" Precio: S/. "<<producto[i].precio<<endl;
                    cout<<" Codigo: "<<producto[i].codigo<<endl;
                    cout<<"+----------------------------------------------+"<<endl;
                    if(producto[i].unidadesEnAlmacen<=0){
                        cout<<" El producto que acaba de buscar ya no hay en el almacen."<<endl;
                    } else {
                        cout<<" El numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                    }
                    cout << "+----------------------------------------------+" << endl;
                }
            }
            system ("pause>nul");
            break;
        case 2:
            cout<<"+----------------------------------------------+"<<endl;
            cout<<"|         BUSCAR PRODUCTO POR CATEGORIA        |"<<endl;
            cout<<"+----------------------------------------------+"<<endl;
            cout<<" Ingrese la categoria del producto: \n ";getline(cin, m);
            cout<<"+----------------------------------------------+"<<endl;
            for(int i=0;i<numeroProductos;i++){
                if(producto[i].categoria==m){
                    cin.ignore( );
                    cout<<" Nombre: "<<producto[i].nombre<<endl;
                    cout<<" Marca: "<<producto[i].marca<<endl;
                    cout<<" Precio: S/. "<<producto[i].precio<<endl;
                    cout<<" Codigo: "<<producto[i].codigo<<endl;
                    cout<<"+----------------------------------------------+"<<endl;
                    if(producto[i].unidadesEnAlmacen<=0){
                        cout<<" El producto que acaba de buscar ya no hay en el almacen."<<endl;
                    } else {
                    cout<<" El numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                    }
                    cout << "+----------------------------------------------+" << endl;
                }
            }
            system ("pause>nul");
            break;
        case 3:
            cout<<"+----------------------------------------------+"<<endl;
            cout<<"|         BUSCAR PRODUCTO POR MARCA            |"<<endl;
            cout<<"+----------------------------------------------+"<<endl;
            cout<<" Ingrese la marca del producto: \n ";getline(cin,m);
            cout<<"+----------------------------------------------+"<<endl;
            for(int i=0;i<numeroProductos;i++){
                if(producto[i].marca==m){
                    cin.ignore( );
                    cout<<" Nombre: "<<producto[i].nombre<<endl;
                    cout<<" Categoria: "<<producto[i].categoria<<endl;
                    cout<<" Precio: S/. "<<producto[i].precio<<endl;
                    cout<<" Codigo: "<<producto[i].codigo<<endl;
                    cout<<"+----------------------------------------------+"<<endl;
                    if(producto[i].unidadesEnAlmacen<=0){
                        cout<<" El producto que usted buscar ya no hay en el almacen."<<endl;
                    }else{
                        cout<<" El numero de unidades disponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                    }
                    cout << "+----------------------------------------------+" << endl;
                }
            }
            system ("pause>nul");
            break;
        case 4:
            cout<<"+----------------------------------------------+"<<endl;
            cout<<"|         BUSCAR PRODUCTO POR CODIGO           |"<<endl;
            cout<<"+----------------------------------------------+"<<endl;
            cout<<" Ingrese el codigo del producto: \n ";cin>>h;
            cout<<"+----------------------------------------------+"<<endl;
            for(int i=0;i<numeroProductos;i++){
                if(producto[i].codigo == h){
                    cout<<" Nombre: "<<producto[i].nombre<<endl;
                    cout<<" Categoria: "<<producto[i].categoria<<endl;
                    cout<<" Marca: "<<producto[i].marca<<endl;
                    cout<<" Precio: S/. "<<producto[i].precio<<endl;
                    cout<<"+----------------------------------------------+"<<endl;
                    if(producto[i].unidadesEnAlmacen<=0){
                        cout<<" El producto que acaba de buscar se vendio todo."<<endl;
                    }else{
                    cout<<" El numero de unidades diponibles es: "<<producto[i].unidadesEnAlmacen<<endl;
                    }
                    cout << "+----------------------------------------------+" << endl;
                }
            }
            system ("pause>nul");
            break;
        case 0:
            cout<<" REGRESANDO..."<<endl;
            break;
        default:
            cout<<" ERROR: OPCION INVALIDA"<<endl;
            cout<<" Intente otra vez."<<endl;
            break;
        }
    } while(n!=0);
}