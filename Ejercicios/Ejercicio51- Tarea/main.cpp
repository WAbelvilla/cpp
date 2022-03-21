#include <iostream>
#include <math.h>

using namespace std;

double numero = 0;
int resultado;

int main(int argc, char const *argv[])
{
    cout << " Ingrese un numero: ";
    cin >> numero;

    resultado = ( sqrt (numero));

    cout << " La raiz cuadrada de " << numero << " es : " << resultado << endl;


    return 0;
}
