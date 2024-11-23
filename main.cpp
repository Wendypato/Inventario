#include <iostream>
#include "Inventory.h"
#include "History.h"
#include <string>

using namespace std;

int main()
{
    Inventory inventory;
    History history;

    string name = "audifonos";

    int choice ;
    do
    {
        cout<<"Inventario 2024"<<endl;
        cout<<"1.- Agreagar un producto: "<<endl;
        cout<<"5.- Salir del inventario"<<endl;
        cout<<"Elige una opcion: ";
        cin >> choice;

        string nombre;
        int cantidad;
        switch (choice)
        {
        case 1:
            cout<<"Nombre del producto: "<<endl;
            cin>>nombre;
            cout<<"Ingrese la cantidad: "<<endl;
            cin>>cantidad;
            inventory.addProduct(nombre, cantidad);
            history.addRecord();
            break;
        case 5:
            cout<<"Saliendo del historial"<<endl;
            break;

        default:
            cout<<"Opcion no validad"<<endl;
            break;

        }
    }while(choice != 5);
    inventory.addProduct(name,3);
    inventory.getProduct(name);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
