#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "pacientes.h"
#include "ingreso.h"

using namespace std;



void menu()
{
	int opcion = 0;
	
	system("cls");
	cout << "--------------------------" << endl;
	cout << " ESTADISTICAS COVID-19    " << endl;
	cout << "--------------------------" << endl;
	cout << endl;
	cout << " 1 - Ingresar pacientes" << endl;
	cout << " 2 - Visualizar pacientes" << endl;
	cout << " 3 - Salir" << endl;
	
    cout << " Ingrese un numero del menu y presione enter --> ";
	cin >> opcion;
	
	switch (opcion)
    {
    case 1:
        registrarPaciente();
        break;
    case 2:
        mostrarPacientes();
        break;
    case 3:
        logout();
        break;
    
    default:
        break;
    }
}

    