#include "DataBase.h"
#include "../variables.h"

void DatabaseEmpleados() {
    empleado[0] = {"Juan Perez Garcia", "80431790", "10001", "Perez2002", "jperezg@susti.com", "987432009", 45, 5800.00, "Gerente General", 0, 40, false};
    empleado[1] = {"Ana Gomez Ruiz", "12345678", "10002", "Gomez2023", "anagomez@susti.com", "912345678", 35, 4500.00, "Gerente de Tienda", 0, 40, false};
    empleado[2] = {"Carlos Martinez Lopez", "87654321", "10003", "Martinez2024", "carlitos@susti.com", "998877665", 35, 4800.00, "Contador", 0, 42, false};
    empleado[3] = {"Laura Silva Castro", "23456789", "10004", "Silva2023", "laurasilva@susti.com", "965432109", 38, 4000, "Tesoreria", 0, 42, false};
    empleado[4] = {"Miguel Fernandez Morales", "34567890", "10005", "Miguel2023", "miguelf@susti.com", "954321678", 46, 4200.00, "RRHH", 0, 40, false};
    empleado[5] = {"Sofia Ramirez Ortega", "45678901", "10006", "Sofia2023", "sofia@susti.com", "932178654", 32, 3400.00, "Cajero", 0, 45, false};
    empleado[6] = {"Pedro Morales Ruiz", "56789012", "10007", "Pedro2024", "pedro@susti.com", "920123456", 40, 2900.00, "Servicio de Limpieza", 0, 40, false};
    empleado[7] = {"Valeria Cruz Gonzalez", "67890123", "10008", "Valeria2023", "valeria@susti.com", "933456789", 27, 3500.00, "Seguridad", 0, 45, false};
    empleado[8] = {"Daniela Torres Pena", "78901234", "10009", "Daniela2024", "daniela@susti.com", "943210987", 36, 2900.00, "Ayudante de Tienda", 0, 40, false};
    empleado[9] = {"Alejandro Vargas Lopez", "89012345", "10010", "Alejandro2023", "alejandro@susti.com", "956789012", 31, 5000.00, "Gerente de Tienda", 0, 40, false};
    empleado[10] = {"Maria Fernanda Jaramillo", "90123456", "10011", "Maria2024", "maria@susti.com", "967890123", 42, 4800.00, "Contador", 0, 42, false};
    empleado[11] = {"Sebastian Montoya", "01234567", "10012", "Sebastian2023", "sebastian@susti.com", "978901234", 30, 4000, "Tesoreria", 0, 42, false};
    empleado[12] = {"Catalina Lozano Mejia", "12345679", "10013", "Catalina2024", "catalina@susti.com", "989012345", 26, 4200.00, "RRHH", 0, 30, false};
    empleado[13] = {"Andres Martinez Rios", "23456780", "10014", "Andres2023", "andres@susti.com", "990123456", 41, 3400.00, "Cajero", 0, 45, false};
    empleado[14] = {"Lina Moreno Ruiz", "34567891", "10015", "Lina2024", "lina@susti.com", "991234567", 33, 2900.00, "Servicio de Limpieza", 0, 40, false};
    empleado[15] = {"Ricardo Ortega Castro", "45678902", "10016", "Ricardo2023", "ricardo@susti.com", "992345678", 37, 3500.00, "Seguridad", 0, 45, false};
    empleado[16] = {"Isabella Jimenez Herrera", "56789013", "10017", "Isabella2024", "isabella@susti.com", "993456789", 25, 2900.00, "Ayudante de Tienda", 0, 40, false};
    empleado[17] = {"Felipe Castano Alvarez", "67890124", "10018", "Felipe2023", "felipe@susti.com", "994567890", 44, 3400.00, "Cajero", 0, 45, false};
    empleado[18] = {"Sara Castillo Vargas", "78901235", "10019", "Sara2024", "sara@susti.com", "995678901", 28, 4800.00, "Contador", 0, 42, false};
    empleado[19] = {"Luis Alejandro Gomez", "89012346", "10020", "Luis2023", "luis@susti.com", "996789012", 39, 4000, "Tesoreria", 0, 42, false};
    empleado[20] = {"Natalia Sanchez Gomez", "90123457", "10021", "Natalia2024", "natalia@susti.com", "997890123", 34, 4200.00, "RRHH", 0, 40, false};
    empleado[21] = {"Julian Paredes Vargas", "01234568", "10022", "Julian2023", "julian@susti.com", "998901234", 29, 3400.00, "Cajero", 0, 45, false};
    empleado[22] = {"Gabriela Morales Castillo", "12345680", "10023", "Gabriela2024", "gabriela@susti.com", "999012345", 31, 2900.00, "Servicio de Limpieza", 0, 40, false};
    empleado[23] = {"Hector Ruiz Martinez", "23456781", "10024", "Hector2023", "hector@susti.com", "999123456", 38, 3500.00, "Seguridad", 0, 45, false};
    empleado[24] = {"Camila Gomez Torres", "34567892", "10025", "Camila2024", "camila@susti.com", "999234567", 27, 2900.00, "Ayudante de Tienda", 0, 40, false};
    empleado[25] = {"Fernando Arce Rios", "45678903", "10026", "Fernando2023", "fernando@susti.com", "999345678", 43, 6400.00, "Gerente de Tienda", 0, 45, false};
    empleado[26] = {"Diana Castro Herrera", "56789014", "10027", "Diana2024", "diana@susti.com", "999456789", 26, 4800.00, "Contador", 0, 42, false};
    empleado[27] = {"Manuel Torres Perez", "67890125", "10028", "Manuel2023", "manuel@susti.com", "999567890", 35, 4000, "Tesoreria", 0, 42, false};
    empleado[28] = {"Martha Silva Castillo", "78901236", "10029", "Martha2024", "martha@susti.com", "999678901", 32, 4200.00, "RRHH", 0, 40, false};
    empleado[29] = {"Jorge Martinez Lopez", "89012347", "10030", "Jorge2023", "jorge@susti.com", "999789012", 40, 3400.00, "Cajero", 0, 45, false};
    numeroEmpleados = 30;
}

void DatabaseProductos () {
    producto[0] = {"Electronica", "Televisor", "Samsung", "TV001", 550.00, 400.00, 20};
    producto[1] = {"Electronica", "Smartphone", "Apple", "SP001", 999.00, 750.00, 15};
    producto[2] = {"Electronica", "Auriculares", "Sony", "AU001", 150.00, 100.00, 30};
    producto[3] = {"Electronica", "Laptop", "Dell", "LP001", 1200.00, 900.00, 10};
    producto[4] = {"Electronica", "Camara", "Canon", "CA001", 800.00, 600.00, 12};
    producto[5] = {"Electrodomesticos", "Refrigerador", "LG", "RF001", 700.00, 500.00, 8};
    producto[6] = {"Electrodomesticos", "Lavadora", "Bosch", "LW001", 600.00, 450.00, 7};
    producto[7] = {"Electrodomesticos", "Microondas", "Panasonic", "MC001", 120.00, 80.00, 25};
    producto[8] = {"Electrodomesticos", "Cafetera", "Krups", "CF001", 75.00, 50.00, 18};
    producto[9] = {"Electrodomesticos", "Plancha", "Philips", "PL001", 60.00, 40.00, 20};
    producto[10] = {"Muebles", "Sofa", "IKEA", "SF001", 450.00, 300.00, 10};
    producto[11] = {"Muebles", "Mesa de comedor", "Ashley", "MC002", 350.00, 250.00, 5};
    producto[12] = {"Muebles", "Silla", "Herman Miller", "SC001", 200.00, 150.00, 15};
    producto[13] = {"Muebles", "Cama", "Tempur", "CA001", 600.00, 450.00, 8};
    producto[14] = {"Muebles", "Escritorio", "Wayfair", "ES001", 180.00, 130.00, 12};
    producto[15] = {"Ropa", "Camisa", "Zara", "CM001", 40.00, 25.00, 50};
    producto[16] = {"Ropa", "Pantalones", "Levi's", "PA001", 60.00, 40.00, 45};
    producto[17] = {"Ropa", "Chaqueta", "North Face", "CH001", 120.00, 80.00, 30};
    producto[18] = {"Ropa", "Zapatos", "Nike", "ZA001", 100.00, 70.00, 40};
    producto[19] = {"Ropa", "Sombrero", "Adidas", "SO001", 25.00, 15.00, 35};
    producto[20] = {"Deportes", "Pelota de fútbol", "Puma", "PF001", 30.00, 20.00, 25};
    producto[21] = {"Deportes", "Raqueta de tenis", "Wilson", "RT001", 90.00, 60.00, 10};
    producto[22] = {"Deportes", "Bicicleta", "Trek", "BC001", 500.00, 400.00, 6};
    producto[23] = {"Deportes", "Colchoneta", "Nike", "CO001", 45.00, 30.00, 20};
    producto[24] = {"Deportes", "Guantes de boxeo", "Everlast", "GB001", 55.00, 40.00, 15};
    producto[25] = {"Juguetes", "Peluche", "Disney", "PL001", 35.00, 20.00, 40};
    producto[26] = {"Juguetes", "Muñeca", "Mattel", "MU001", 50.00, 35.00, 25};
    producto[27] = {"Juguetes", "Carro de control remoto", "Hot Wheels", "CC001", 70.00, 50.00, 12};
    producto[28] = {"Juguetes", "Juego de construccion", "LEGO", "JC001", 90.00, 60.00, 15};
    producto[29] = {"Juguetes", "Rompecabezas", "Ravensburger", "RO001", 25.00, 18.00, 30};
    producto[30] = {"Herramientas", "Taladro", "Bosch", "TA001", 150.00, 110.00, 20};
    producto[31] = {"Herramientas", "Sierra circular", "Makita", "SI001", 180.00, 130.00, 15};
    producto[32] = {"Herramientas", "Juego de destornilladores", "DeWalt", "JD001", 45.00, 30.00, 25};
    producto[33] = {"Herramientas", "Martillo", "Stanley", "MA001", 25.00, 18.00, 30};
    producto[34] = {"Herramientas", "Llave inglesa", "Craftsman", "LI001", 40.00, 30.00, 22};
    producto[35] = {"Oficina", "Silla ergonomica", "Herman Miller", "SE001", 250.00, 180.00, 12};
    producto[36] = {"Oficina", "Lampara de escritorio", "Philips", "LA001", 80.00, 60.00, 20};
    producto[37] = {"Oficina", "Papel para impresora", "HP", "PP001", 10.00, 7.00, 100};
    producto[38] = {"Oficina", "Tinta para impresora", "Epson", "TI001", 25.00, 18.00, 30};
    producto[39] = {"Oficina", "Archivador", "Office Depot", "AR001", 55.00, 40.00, 18};
    producto[40] = {"Cuidado personal", "Cepillo de dientes", "Oral-B", "CD001", 15.00, 10.00, 40};
    producto[41] = {"Cuidado personal", "Crema hidratante", "Nivea", "CH001", 20.00, 15.00, 35};
    producto[42] = {"Cuidado personal", "Champu", "Pantene", "CH002", 12.00, 8.00, 50};
    producto[43] = {"Cuidado personal", "Afeitadora", "Philips", "AF001", 60.00, 45.00, 25};
    producto[44] = {"Cuidado personal", "Desodorante", "Dove", "DE001", 8.00, 5.00, 60};
    producto[45] = {"Bebidas", "Agua mineral", "Evian", "AM001", 2.00, 1.50, 100};
    producto[46] = {"Bebidas", "Cerveza", "Corona", "CE001", 5.00, 3.50, 50};
    producto[47] = {"Bebidas", "Jugo de naranja", "Tropicana", "JN001", 3.50, 2.50, 80};
    producto[48] = {"Bebidas", "Refresco", "Coca-Cola", "RF001", 1.50, 1.00, 120};
    producto[49] = {"Bebidas", "Vino tinto", "Marques de Riscal", "VT001", 25.00, 18.00, 15};
    numeroProductos = 50;
}

void DatabaseCaja() {
    caja = 150000.00;
}