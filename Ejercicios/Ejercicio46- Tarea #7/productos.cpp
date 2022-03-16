#include <iostream>



using namespace std;

void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch(opcion)
    {
        case 1:
        {
            
            cout << " BEBIDAS CALIENTES " << endl;
            cout << " ***************** " << endl;
            cout << " 1 - Capuccino. " << endl;
            cout << " 2 - Expresso. " << endl;
            cout << " 3 - Cafe negro. " << endl;
            cout << endl;

            cout << " Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Capuccino - L.40.00", 1, 40);
                break;
            case 2:
                agregarProducto("1 Expresso - L.30.00", 1, 30);
                break;
            case 3:
                agregarProducto("1 Cafe negro - L.35.00", 1, 30);
                break;
                
            default:
                {
                    cout << " Opcion no valida ";
                    return;
                    break;
                }    
            }

            cout << endl;
            cout << " Producto agregado a su factura... " << endl << endl;
            system("pause");
            
            break;
        } 
        case 2:
        {
            cout << " BEBIDAS FRIAS " << endl;
            cout << " ************* " << endl;
            cout << " 1 - Coca - cola. " << endl;
            cout << " 2 - Jugo de Limon. " << endl;
            cout << " 3 - Jugo de sandia. " << endl;
            cout << endl;

            cout << " Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Coca - cola - L.16.00", 1, 16);
                break;
            case 2:
                agregarProducto("1 Jugo de Limon - L.25.00", 1, 25);
                break;
            case 3:
                agregarProducto("1 Jugo de sandia - L.20.00", 1, 20);
                break;
                
            default:
                {
                    cout << " Opcion no valida ";
                    return;
                    break;
                }    
            }

            cout << endl;
            cout << " Producto agregado a su factura... " << endl << endl;
            system("pause");
            break;
        }
        case 3:
        {
            cout << " REPOSTERIA " << endl;
            cout << " ********** " << endl;
            cout << " 1 - Donas con chispas de coco. " << endl;
            cout << " 2 - Pastel tres leches. " << endl;
            cout << " 3 - Pan de coco. " << endl;
            cout << endl;

            cout << " Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Donas con chispas de coco - L.40.00", 1, 40);
                break;
            case 2:
                agregarProducto("1 Pastel tres leches - L.350.00", 1, 350);
                break;
            case 3:
                agregarProducto("1 Pan de coco - L.15.00", 1, 15);
                break;
                
            default:
                {
                    cout << " Opcion no valida ";
                    return;
                    break;
                }    
            }

            cout << endl;
            cout << " Producto agregado a su factura..." << endl << endl;
            system("pause");
            break;
        }   
    default:
        break;        
    }



}
