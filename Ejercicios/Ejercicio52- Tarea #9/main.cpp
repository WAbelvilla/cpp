#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    int numero1 = 0;
    int total = 0;

    //Inicializa el numero random.
    srand(time(NULL));

    
   
    system("cls");
    // Genera un numero entre 1 y 6
    numero = rand() % 3 + 1;
    cout << " Primer dado: " << numero << endl;

    numero1 = rand() % 3 + 1;
    cout << " Segundo dado: " << numero1 << endl;
    
    
    // Resultado
    total = numero1 + numero;

    cout << endl;
    cout << " El resultado seria: " << total << endl << endl;    
  

    return 0;
}
