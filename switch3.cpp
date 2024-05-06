#include <iostream>
using namespace std;
int main()
{
    char letra, c;
    cout << "Ingrese una letra: ";
    cin >> c;
    letra = c;
    switch (letra)
    {
        case 'R':
        case 'r':
        cout << c << " es rojo\n";
        break;

        case 'Y':
        case 'y':
        cout << c << " es amarillo\n";
        break;

        case 'B':
        case 'b':
        cout << c << " es azul\n";
        break;

        case 'W':
        case 'w':
        cout << c << " es blanco\n";
        break;

        case 'K':
        case 'k':
        cout << c << " es negro\n";
        break;

        case 'C':
        case 'c':
        cout << c << " es cian\n";
        break;

        case 'G':
        case 'g':
        cout << c << " es verde\n";
        break;

        default:
        cout << c <<" no tiene color asignado\n";
    }
    return 0;
}