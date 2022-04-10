#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "pacientes.h"
#include "ingreso.h"



using namespace std;
string nombrePacientes;

string pacientes[20][4] = 
{
    { "Maria Guadalupe Villafranca", "44", "Femenino", "Olancho"},
    { "Maria Jerusalem Villatoro", "34", "Femenino", "Olanchito"},
    { "Jose Macario Funes Zelaya", "48", "Masculino", "Cortes"},
    { "Enzo Mauricio Argueta Tejeda", "25", "Masculino", "Tegucigalpa"},
    { "Fabricio Trincao Aleman Vallecillo", "54", "Masculino", "Santa Barbara"},
    { "Bianca Jamileth Argueta Arriga", "51", "Femenino", "Ocotepeque"},
    { "Josefina Lizbeth Jacome Valladares", "44", "Femenino", "La Paz"},
    { "Tania Alejandra Gutierrez Amador", "24", "Femenino", "Tegucigalpa"},
    { "Victor Alexander Funes Puerto", "21", "Masculino", "San Pedro Sula"},
    { "Wilmer Ricardo Aleman Jacome", "62", "Masculino", "Tegucigalpa"},
    { "Fernando Santiago Villafranca Bustillo", "15", "Masculino", "San Pedro Sula"},
    { "Xiomara Janixa Castro Zelaya", "16", "Femenino", "Olancho"},
    { "Yeni Mirey Herrera Potranca", "88", "Femenino", "Olancho"},
    { "Cristian Daniel Portillo Sauceda", "36", "Masculino", "Ocotepeque"},
    { "Maryoti Teresa Funes Calix", "37", "Femenino", "Tegucigalpa"},
    
};

void registrarPaciente( string primerNombre, string segundoNombre )
{
    nombrePacientes = primerNombre + segundoNombre;

    cout << " Paciente agregado es: " << nombrePacientes;
}

void mostrarPacientes()
{
    system("cls");
    cout << " ------------------------------------ " << endl;
    cout << " Nombre completo, Edad, Sexo y Ciudad " << endl;
    cout << " ------------------------------------ " << endl << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << pacientes[i][0] << " | ";
        cout << pacientes[i][1] << " | ";
        cout << pacientes[i][2] << " | ";
        cout << pacientes[i][3] << " | ";
        cout << endl;
        cout << endl;
    }
       
    
    char opcion = 's';

    if (opcion == 's' || opcion == 'S')
    {
        cout << " Desea regresar al menu? s/n ";
        cin >> opcion;
        return menu();
    }
   
  
}



