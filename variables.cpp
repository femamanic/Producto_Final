#include "variables.h"

registro empleado[100];
int numeroEmpleados = 0;

inventario producto[100];
int numeroProductos = 0;

compra carrito[100];
int numerocarrito = 0;
float totalCarrito = 0;

string diaActual[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
string semanaActual[4] = {"Semana1", "Semana2", "Semana3", "Semana4"};
string mesActual[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

float compraProveedores = 0;
float gastoSueldos = 0;
float caja = 0;