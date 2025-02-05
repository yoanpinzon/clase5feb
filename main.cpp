#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Juan";
    string saludo = "Hola, " + nombre + "!";
    cout << saludo << endl;
    cout << "El saludo tiene " << saludo.length() << " caracteres." << endl;
    return 0;
}