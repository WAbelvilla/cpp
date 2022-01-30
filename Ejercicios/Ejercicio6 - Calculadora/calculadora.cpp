#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int resultado = 0;
    
    cout << " Ingrese el valor de a: ";
    cin >> a;

    cout << " Ingrese el valor de b:";
    cin >> b;
    cout << endl;

    resultado = a + b;
    cout << " La suma de a + b es de: " << resultado << endl;

    resultado = a - b;
    cout << " La resta de a - b es de: " << resultado << endl;

    resultado = a * b;
    cout << " La multiplicacion de a * b es de: " << resultado << endl;

    resultado = a / b;
    cout << " La division de a / b es de: " << resultado << endl;




    return 0;
}
