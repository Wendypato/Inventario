#include <iostream>
#include "Inventory.h"
#include "History.h"
#include <string>

using namespace std;

int main()
{
    Inventory inventory;
    History history;

    string initialProduct = "audifonos";
    int initialQuantity = 10;
    inventory.addProduct(initialProduct, initialQuantity);
    history.addRecord("Producto inicial agregado: " + initialProduct + ", cantidad: " + to_string(initialQuantity));

    int choice;
    do
    {
        cout << "Inventario 2024" << endl;
        cout << "1.- Agregar un producto: " << endl;
        cout << "2.- Obtener cantidad de un producto: " << endl;
        cout << "3.- Eliminar un producto: " << endl;
        cout << "5.- Salir del inventario" << endl;
        cout << "Elige una opcion: ";
        cin >> choice;

        string nombre;
        int cantidad;
        switch (choice)
        {
        case 1:
            cout << "Nombre del producto: " << endl;
            cin >> nombre;
            cout << "Ingrese la cantidad: " << endl;
            cin >> cantidad;
            inventory.addProduct(nombre, cantidad);
            // Agregar un registro al historial
            history.addRecord("Producto agregado: " + nombre + ", cantidad: " + to_string(cantidad));
            break;
        case 2:
            cout << "Nombre del producto: ";
            cin >> nombre;
            cantidad = inventory.getProduct(nombre);
            if (cantidad >= 0)
            {
                cout << "Cantidad de " << nombre << ": " << cantidad << endl;
            }
            else
            {
                cout << "Producto no encontrado." << endl;
            }
            break;
        case 3:
            cout << "Nombre del producto: ";
            cin >> nombre;
            if (inventory.removeProduct(nombre))
            {
                cout << "Producto eliminado: " << nombre << endl;
                history.addRecord("Producto eliminado: " + nombre);
            }
            else
            {
                cout << "Producto no encontrado." << endl;
            }
            break;
        case 4:
            cout << "Mostrando historial:" << endl;
            history.showHistory();
            break;
        case 5:
            cout << "Saliendo del historial" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}

