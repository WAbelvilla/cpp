#include <iostream>
#include "seguridad.h"

using namespace std;

bool login()
{
	int intentos = 0;
	while(true)
	{
		system("cls");

		cout << " _______  ___   _______  __    _  __   __  _______  __    _  ___   ______   _______ " << endl; 
		cout << "|  _    ||   | |       ||  |  | ||  | |  ||       ||  |  | ||   | |      | |       |" << endl;
		cout << "| |_|   ||   | |    ___||   |_| ||  |_|  ||    ___||   |_| ||   | |  _    ||   _   |" << endl;
		cout << "|       ||   | |   |___ |       ||       ||   |___ |       ||   | | | |   ||  | |  |" << endl;
		cout << "|  _   | |   | |    ___||  _    ||       ||    ___||  _    ||   | | |_|   ||  |_|  |" << endl;
		cout << "| |_|   ||   | |   |___ | | |   | |     | |   |___ | | |   ||   | |       ||       |" << endl;
		cout << "|_______||___| |_______||_|  |__|  |___|  |_______||_|  |__||___| |______| |_______|" << endl;
		cout << endl;
		cout << endl;

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
	cout << " _______  __   __  _______  ______   _______  _______  _______        _______  __    _        _______  _______  _______  _______  " << endl;                       
	cout << "|       ||  | |  ||       ||      | |   _   ||       ||       |      |       ||  |  | |      |       ||   _   ||       ||   _   |" << endl;                      
	cout << "|   _   ||  | |  ||    ___||  _    ||  |_|  ||_     _||    ___|      |    ___||   |_| |      |       ||  |_|  ||  _____||  |_|  |" << endl;                      
	cout << "|  | |  ||  |_|  ||   |___ | | |   ||       |  |   |  |   |___       |   |___ |       |      |       ||       || |_____ |       |" << endl;                      
	cout << "|  |_|  ||       ||    ___|| |_|   ||       |  |   |  |    ___|      |    ___||  _    |      |      _||       ||_____  ||       |" << endl;                      
	cout << "|      | |       ||   |___ |       ||   _   |  |   |  |   |___       |   |___ | | |   |      |     |_ |   _   | _____| ||   _   |" << endl;                      
	cout << "|____||_||_______||_______||______| |__| |__|  |___|  |_______|      |_______||_|  |__|      |_______||__| |__||_______||__| |__|" << endl;                      
	cout << " __   __  _______  _______        _______  __   __        __   __  _______  _______  _______  _______  ______    ___   ___      ___      _______ " << endl;      
	cout << "|  | |  ||       ||   _   |      |       ||  | |  |      |  |_|  ||   _   ||       ||       ||   _   ||    _ |  |   | |   |    |   |    |   _   |" << endl;      
	cout << "|  | |  ||  _____||  |_|  |      |_     _||  | |  |      |       ||  |_|  ||  _____||       ||  |_|  ||   | ||  |   | |   |    |   |    |  |_|  |" << endl;      
	cout << "|  |_|  || |_____ |       |        |   |  |  |_|  |      |       ||       || |_____ |       ||       ||   |_||_ |   | |   |    |   |    |       |" << endl;      
	cout << "|       ||_____  ||       |        |   |  |       |      |       ||       ||_____  ||      _||       ||    __  ||   | |   |___ |   |___ |       | ___ " << endl; 
	cout << "|       | _____| ||   _   |        |   |  |       |      | ||_|| ||   _   | _____| ||     |_ |   _   ||   |  | ||   | |       ||       ||   _   ||   |" << endl;
	cout << "|_______||_______||__| |__|        |___|  |_______|      |_|   |_||__| |__||_______||_______||__| |__||___|  |_||___| |_______||_______||__| |__||___|" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

