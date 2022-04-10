#include <iostream>
#include "seguridad.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool acceso = login();
	
	if ( acceso == true)
	{
		menu();
	}
    return 0;
}