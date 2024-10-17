#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    char caracter;
    cout << "Ingrese la palabra: ";
    getline(cin, palabra);
    cout << "Ahora ingrese el caracter a contar: ";
    cin >> caracter;

    int cvc = 0;
    for (int i = 0; i < palabra.length(); ++i) {
        if (palabra[i] == caracter) {
            cvc++;
        }
    }

    cout << "La cantidad de veces que aparece "<< caracter << " es " << cvc << endl;

    return 0;
}

