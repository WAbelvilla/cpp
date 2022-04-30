#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "pacientes.h"
#include "ingreso.h"

using namespace std;
char opcion = 's';

string pacientes[100][7] = 
{
    { "Maria", "Guadalupe", "Villafranca", "Zelaya", "44", "Femenino", "Olancho"},
    { "Maria", "Jerusalem", "Cruz", "Villatoro", "34", "Femenino", "Yoro"},
    { "Jose", "Macario", "Funes", "Zelaya", "48", "Masculino", "Cortes"},
    { "Enzo", "Mauricio", "Argueta", "Tejeda", "25", "Masculino", "Francisco morazan"},
    { "Fabricio", "Trincao", "Aleman", "Vallecillo", "54", "Masculino", "Santa Barbara"},
    { "Bianca", "Jamileth", "Argueta", "Arriga", "51", "Femenino", "Ocotepeque"},
    { "Josefina", "Lizbeth", "Jacome", "Valladares", "44", "Femenino", "La Paz"},
    { "Tania", "Alejandra", "Gutierrez", "Amador", "24", "Femenino", "Cortes"},
    { "Victor", "Alexander", "Funes", "Puerto", "21", "Masculino", "Islas de la Bahia"},
    { "Wilmer", "Ricardo", "Aleman", "Jacome", "62", "Masculino", "Copan"},
    { "Fernando", "Santiago", "Villafranca", "Bustillo", "15", "Masculino", "Choluteca"},
    { "Xiomara", "Janixa", "Castro", "Zelaya", "16", "Femenino", "Olancho"},
    { "Yeni", "Mirey", "Herrera", "Potranca", "88", "Femenino", "Olancho"},
    { "Cristian", "Daniel", "Portillo", "Sauceda", "36", "Masculino", "Ocotepeque"},
    { "Maryori", "Teresa", "Funes", "Calix", "37", "Femenino", "Tegucigalpa"},
    
};

int ultimoPaciente = 15; // < --- Este es el ultimo paciente del arreglo pacientes.

void mostrarPacientes()
{
    system("cls");
    cout << "  _______  _______  __   __  ___   ______              ____   _______ " << endl;        
    cout << " |       ||       ||  | |  ||   | |      |            |    | |  _    |" << endl;   
    cout << " |       ||   _   ||  |_|  ||   | |  _    |   ____     |   | | | |   |" << endl;   
    cout << " |       ||  | |  ||       ||   | | | |   |  |____|    |   | | |_|   |" << endl;  
    cout << " |      _||  |_|  ||       ||   | | |_|   |            |   | |___    |" << endl;   
    cout << " |     |_ |       | |     | |   | |       |            |   |     |   |" << endl;   
    cout << " |_______||_______|  |___|  |___| |______|             |___|     |___|" << endl;      
    cout << endl;
    cout << " ------------------------------------ " << endl;
    cout << " Nombre completo, Edad, Sexo y Ciudad " << endl;
    cout << " ------------------------------------ " << endl << endl;

 
    int atlantida = 0;
    int colon = 0;
    int comayagua = 0;
    int copan = 0;
    int cortes = 0;
    int choluteca = 0;
    int elParaiso = 0;
    int franciscoMorazan = 0;
    int graciasDios = 0;
    int intibuca = 0;
    int islasdelaBahia = 0;
    int laPaz = 0;
    int lempira = 0;
    int ocotepeque = 0;
    int olancho = 0;
    int santaBarbara = 0;
    int valle = 0;
    int yoro = 0;
    
    
    for (int i = 0; i < 100; i++)
    {
        if (pacientes[i][0] == "")
        {
            break;
        }
        if (pacientes[i][6]=="Olancho"){
            olancho = olancho + 1;
        }else if (pacientes[i][6]=="Colon"){
            colon = colon + 1;
        }else if (pacientes[i][6]=="Comayagua"){
            comayagua = comayagua + 1;
        }else if (pacientes[i][6]=="Copan"){
            copan = copan + 1;
        }else if (pacientes[i][6]=="Cortes"){
            cortes = cortes + 1;
        }else if (pacientes[i][6]=="El Paraiso"){
            elParaiso = elParaiso + 1;
        }else if (pacientes[i][6]=="Francisco Morazan"){
            franciscoMorazan = franciscoMorazan + 1;
        }else if (pacientes[i][6]=="Gracias a Dios"){
            graciasDios = graciasDios + 1;
        }else if (pacientes[i][6]=="Intibucá"){
            intibuca = intibuca + 1;
        }else if (pacientes[i][6]=="Islas de la Bahia"){
            islasdelaBahia = islasdelaBahia + 1;
        }else if (pacientes[i][6]=="La Paz"){
            laPaz = laPaz + 1;
        }else if (pacientes[i][6]=="Lempira"){
            lempira = lempira + 1;
        }else if (pacientes[i][6]=="Ocotepeque"){
            ocotepeque = ocotepeque + 1;
        }else if (pacientes[i][6]=="Santa Barbara"){
            santaBarbara = santaBarbara + 1;
        }else if (pacientes[i][6]=="Valle"){
            valle = valle + 1;
        }else if (pacientes[i][6]=="Yoro"){
            yoro = yoro + 1;
        }else if (pacientes[i][6]=="Choluteca"){
            choluteca = choluteca + 1;
        }else if (pacientes[i][6]=="Atlantida"){
            atlantida = atlantida + 1;
        }
        cout << pacientes[i][0] << "  ";
        cout << pacientes[i][1] << "  ";
        cout << pacientes[i][2] << "  ";
        cout << pacientes[i][3] << " | ";
        cout << pacientes[i][4] << " | ";
        cout << pacientes[i][5] << " | ";
        cout << pacientes[i][6] << " . ";
        cout << endl;
        cout << endl;
        
    }

    cout << endl;
    cout << endl;
    cout << " **************************" << endl;
    cout << " PACIENTES POR DEPARTAMENTO" << endl;
    cout << " **************************";
    cout << endl;
    
    cout << " Olancho = ";
    cout << olancho;
    cout <<endl;
    cout << " Colon = ";
    cout << colon;
    cout <<endl;
    cout << " Comayagua = ";
    cout << comayagua;
    cout <<endl;
    cout << " Copan = ";
    cout << copan;
    cout <<endl;
    cout << " Cortes = ";
    cout << cortes;
    cout <<endl;
    cout << " El Paraiso = ";
    cout << elParaiso;
    cout <<endl;
    cout << " Francisco Morazan = ";
    cout << franciscoMorazan;
    cout <<endl;
    cout << " Gracias a Dios = ";
    cout << graciasDios;
    cout <<endl;
    cout << " Intibuca = ";
    cout << intibuca;
    cout <<endl;
    cout << " Islas de la Bahia = ";
    cout << islasdelaBahia;
    cout <<endl;
    cout << " La paz = ";
    cout << laPaz;
    cout <<endl;
    cout << " Lempira = ";
    cout << lempira;
    cout <<endl;
    cout << " Ocotepeque = ";
    cout << ocotepeque;
    cout <<endl;
    cout << " Santa Barbara = ";
    cout << santaBarbara;
    cout <<endl;
    cout << " Valle = ";
    cout << valle;
    cout <<endl;
    cout << " Yoro = ";
    cout << yoro;
    cout <<endl;
    cout << " Choluteca = ";
    cout << choluteca;
    cout <<endl;
    cout << " Atlantida = ";
    cout << atlantida;
    cout <<endl;

    cout << endl;
    cout << endl;
    cout << " Desea regresar al menu? s/n: ";
    cin >> opcion;

    
    if (opcion == 's' || opcion == 'S')
    {
        return menu();
    }
    else
    {
        return logout();
    }
   
  
}



