#include <iostream> 
#include "factura.h"

using namespace std;

double subtotal;
double impuesto;
double totalPagar;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n' ;
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    totalPagar = subtotal + impuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << " ******* " <<endl;
    cout << " FACTURA " << endl;
    cout << " ******* " <<endl;
    cout << endl;

    cout << " Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << " Subtotal: ""Lps." << subtotal << endl;
    cout << " ISV: ""Lps." << impuesto << endl;
    cout << " Total a pagar es de: ""Lps." << totalPagar << endl;
    cout << endl;
    cout << endl;system("pause");
}
