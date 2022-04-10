#include <iostream>
#include "seguridad.h"

using namespace std;

bool login()
{
	int intentos = 0;
	while(true)
	{
		system("cls");
		string usuario = " ";
		string contrasena = "";
		
		cout << " Ingrese el usuario: ";
		cin >> usuario;
	
		cout << endl;
	
		cout << " Ingrese la contrasena: ";
		cin >> contrasena;
	
		if(usuario == "admin" && contrasena == "1234")
		{
			return true;	
		}
	    
        cout << " Usuario o contrasena incorrecta";
        cout << endl;
        cout << endl;

        system("pause");

        cout << endl;
        cout << endl;
				
		if ( intentos == 2)
		{
            cout << " HA FALLADO EN LOS INTENTOS!!" << endl;
            cout << " PONGASE EN CONTACTO CON EL ADMINISTRADOR PARA QUE LE BRINDE AYUDA."; 
            cout << endl;
            cout << endl;
            break;
		}
       intentos++;
       
	} 
   	return false;
}

void logout()
{
	system("cls");
	cout << " QUEDATE EN CASA Y USA TU MASCARILLA!!";
    cout << endl;
    cout << endl;
}

