#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "ingreso.h"
#include "pacientes.h"

using namespace std;

char continuar = 's';

void registrarPaciente()
{
    system("cls");  
            
    cout << " Ingrese nombre completo del paciente: ";
    cin >> pacientes[ultimoPaciente][0];
    cin >> pacientes[ultimoPaciente][1];
    cin >> pacientes[ultimoPaciente][2];
    cin >> pacientes[ultimoPaciente][3];
    cout << endl;
        
    cout << " Edad del paciente: ";
    cin >> pacientes[ultimoPaciente][4];
    cout << endl;

    cout << " Sexo del paciente: ";
    cin >> pacientes[ultimoPaciente][5];
    cout << endl;

    cout << " De donde proviene el paciente: ";
    cin >> pacientes[ultimoPaciente][6];
    cout << endl;

    ultimoPaciente++;   
           
    cout << " Desea ingresar otro paciente? s/n: ";
    cin >> continuar;

    if (continuar == 's' || continuar == 'S')
    {
        return registrarPaciente();
    }
    else
    {
        return menu();
    }
        
}






    