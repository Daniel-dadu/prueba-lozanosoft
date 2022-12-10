// #include "Recordatorio/Recordatorio.cpp"
#include <iostream>

int main() {
    int opcion = 0;

    std::cout << "El menú debe tener las siguientes opciones:\n";
    std::cout << "1. Ver mis recordatorios.\n";
    std::cout << "2. Agregar un recordatorio.\n";
    std::cout << "3. Eliminar un recordatorio.\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    if (opcion == 1) {
        // imprimirRecordatorios(leerRecordatorios());
    } else if (opcion == 2) {
        // agregarRecordatorio();
    } else if (opcion == 3) {
        // imprimirRecordatorios(leerRecordatorios());
        std::cout << "Selecciona el número del recordatorio que deseas eliminar: \n";
        int opcion2;
        std::cin >> opcion2;
        // eliminarRecordatorio(opcion2);
    } else {
        std::cout << "Opción inválida\n";
    }
    
}