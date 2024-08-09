g++ -o Gestion_de_Supermercado GestionDeSupermercado.cpp variables.cpp ./CajaRegistradora/agregarProductoAlCarrito.cpp ./CajaRegistradora/menuCajaRegistradora.cpp ./GerenciaComercial/agregarProducto.cpp ./GerenciaComercial/comprarProducto.cpp ./GerenciaComercial/eliminarProducto.cpp ./GerenciaComercial/menuGerenteDeTienda.cpp ./GerenciaComercial/modificarProducto.cpp ./GerenciaComercial/mostrarRegistroDeInventario.cpp ./GerenciaDeAdministracionYFinanzas/Contabilidad/menuContabilidad.cpp ./GerenciaDeAdministracionYFinanzas/RRHH/contratarPersonal.cpp ./GerenciaDeAdministracionYFinanzas/RRHH/despedirPersonal.cpp ./GerenciaDeAdministracionYFinanzas/RRHH/menuRRHH.cpp ./GerenciaDeAdministracionYFinanzas/RRHH/verRegistroDePersonal.cpp ./CajaRegistradora/buscarProducto.cpp ./CajaRegistradora/imprimirRecibo.cpp ./CajaRegistradora/mostrarRegistroDeProductos.cpp ./GerenciaDeAdministracionYFinanzas/Contabilidad/verReporteDeCompras.cpp ./GerenciaDeAdministracionYFinanzas/Contabilidad/verReporteDeVentas.cpp ./GerenciaDeAdministracionYFinanzas/Tesoreria/menuTesoreria.cpp ./GerenciaDeAdministracionYFinanzas/Tesoreria/pagarSueldos.cpp ./GerenciaDeAdministracionYFinanzas/Tesoreria/pagarProveedores.cpp ./GerenciaGeneral/menuGerenciaGeneral.cpp ./DataBase/DataBase.cpp

if ($LASTEXITCODE -ne 0) {
    Write-Output "Error en la compilación."
    exit $LASTEXITCODE
}

./Gestion_de_Supermercado