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

extern float compraProveedores;

extern float gastosSueldos;

extern float caja;

#endif // !VARIABLES_H