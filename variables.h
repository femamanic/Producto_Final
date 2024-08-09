#ifndef VARIABLES_H
#define VARIABLES_H

#include <iostream>
using namespace std;

struct registro {
    string nombre;
    string DNI;
    string codigo;
    string contra;
    string correo;
    string telefono;
    int edad;
    float salario;
    string cargo;
    int minutosTarde = 0;
    int horasDeTrabajo;
    bool sueldoAprobado = false;
};

extern registro empleado[100];
extern int numeroEmpleados;

struct inventario {
    string categoria;
    string nombre;
    string marca;
    string codigo;
    float precio;
    float costo;
    int unidadesEnAlmacen;
};

extern inventario producto[100];
extern int numeroProductos;

struct compra {
    string nombre;
    string codigo;
    int cantidad;
    float precio;
    float total;
};

extern compra carrito[100];
extern int numerocarrito;
extern float totalCarrito;

extern string diaActual[7];
extern string semanaActual[4];
extern string mesActual[12];

extern int diaAct;
extern int semanaAct;
extern int mesAct;
extern int anioAct;

extern float ventasMensuales[7][4];
extern float comprasMensuales[7][4];
extern float gastosMensuales[7][4];

extern float ventasAnuales[12][50];
extern float comprasAnuales[12][50];
extern float gastosAnuales[12][50];

extern float compraProveedores;

extern float gastosSueldos;

extern float caja;

#endif // !VARIABLES_H