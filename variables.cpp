#include "variables.h"

registro empleado[100];
int numeroEmpleados = 0;

inventario producto[100];
int numeroProductos = 0;

compra carrito[100];
int carrito = 0;
float totalCarrito = 0;

string diaActual[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
string semanaActual[4] = {"Semana1", "Semana2", "Semana3", "Semana4"};
string mesActual[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

int diaAct = 0;
int semanaAct = 0;
int mesAct = 0;
int anioAct = 0;

float ventasMensuales[7][4] = {0};
float conprasMensuales[7][4] = {0};
float gastosMensuales[7][4] = {0};

float ventasAnuales[12][50] = {0};
float conprasAnuales[12][50] = {0};
float gastosAnuales[12][50] = {0};