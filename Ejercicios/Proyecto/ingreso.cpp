#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "ingreso.h"
#include "pacientes.h"

using namespace std;
string primerNombre;
string segundoNombre;
string primerApellido;
string segundoApellido;
string edad;
string sexo;
string lugar;

char continuar = 's';

void registrarPaciente()
{
     system("cls");  
            
    cout << " Ingrese el primer: ";
    cin >> primerNombre;
    cout << endl;
    cout << " Ingrese el segundo: ";
    cin >>segundoNombre;
    cout << endl;
    cout << " Ingrese el primer apellido: ";
    cin >> primerApellido;
    cout << endl;
    cout << " Ingrese el segundo apellido: ";
    cin >> segundoApellido;

    cout << endl;
        
    cout << " Edad del paciente: ";
    cin >> edad;
    cout << endl;

    cout << " Sexo del paciente: ";
    cin >> sexo;
    cout << endl;

    cout << " De donde proviene el paciente: ";
    cin >> lugar;
    cout << endl;


    
           

    if (continuar == 's' || continuar == 'S')
    {
        cout << " Desea ingresar otro paciente: s/n ";
        cin >> continuar;
        return menu();
    }
        
}






    