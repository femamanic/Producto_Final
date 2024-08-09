#ifndef VARIABLES_H
#define VARIABLES_H

#include <iostream>
using namespace std;

struct registro {
    string nombre;
    string codigo;
    string contra;
    string correo;
    string telefono;
    int edad;
    float salario;
    string areaDeTrabajo;
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
    int precio;
    string cantidad;
    int unidadesEnAlmacen;
};

extern inventario producto[100];
extern int numeroProductos;

extern string diaActual[7];
extern string semanaActual[4];
extern string mesActual[12];

extern int diaAct;
extern int semanaAct;
extern int mesAct;
extern int anioAct;

extern float ventasMensuales[7][4];
extern float conprasMensuales[7][4];
extern float gastosMensuales[7][4];

extern float ventasAnuales[12][50];
extern float conprasAnuales[12][50];
extern float gastosAnuales[12][50];

#endif // !VARIABLES_H