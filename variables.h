#ifndef VARIABLES_H
#define VARIABLES_H

#include <iostream>
using namespace std;

struct registro {
    string nombre;
    string apellido;
    string codigo;
    string contraseña;
    string correo;
    string telefono;
    int edad;
    int minutosTarde;
    int horasDeTrabajo;
};

extern registro empleado[100];
extern int numeroEmpleados;

struct inventario {
    string categoria;
    string nombre;
    string marca;
    string codigo;
    int precio;
    string cantidad;
    int unidadesEnAlmacen;
};

extern inventario producto[100];
extern int numeroProductos;

#endif // !VARIABLES_H