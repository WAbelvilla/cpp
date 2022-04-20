#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int sumaTotal = 0;
int totalFila = 0;
int totalColumna = 0;
int fila = 0;
int columna = 0;

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    int arregloRandom[5][5]
    {
        {(rand() % 7 + 1), (rand() % 9 + 1), (rand() % 9 + 1), (rand() % 9 + 1), (rand() % 8 + 1)},
        {(rand() % 5 + 1), (rand() % 8 + 1), (rand() % 7 + 1), (rand() % 6 + 1), (rand() % 4 + 1)},
        {(rand() % 8 + 1), (rand() % 6 + 1), (rand() % 9 + 1), (rand() % 9 + 1), (rand() % 8 + 1)},
        {(rand() % 4 + 1), (rand() % 7 + 1), (rand() % 9 + 1), (rand() % 5 + 1), (rand() % 6 + 1)},
        {(rand() % 9 + 1), (rand() % 8 + 1), (rand() % 9 + 1), (rand() % 4 + 1), (rand() % 9 + 1)}
                        
    };

    cout << endl;
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arregloRandom[i][j] << " ";
        }
        cout << endl;
    }
        
    cout << endl;
   for(int i = 0; i < 5; i++)
   {
       totalFila = 0;
       for(int j = 0; j < 5; j++)
       {
           totalFila += arregloRandom[i][j];           
       }
       fila += totalFila;       
       cout << " Fila: " << i << " ---- " << totalFila << endl;         
   }
  
   cout << endl;  
   for(int j = 0; j < 5; j++)
   {
       totalColumna = 0;
       for(int i = 0; i < 5; i++)
       {
           totalColumna += arregloRandom[i][j];           
       }
       columna += totalColumna;
       cout << " Columna: " << j << " ---- " << totalColumna << endl;         
   }
  
    sumaTotal = fila + columna;

    cout << endl;
    cout << " La suma total seria: " << sumaTotal << endl << endl;

}