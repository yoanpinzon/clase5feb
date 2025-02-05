#include <iostream>
#include <cmath>
using namespace std;

int main() {

    system("chcp 65001 >nul");

    double base = 2.0, exponente = 4.0;
    cout << "2^4 = " << pow(base, exponente) << endl;
    cout << "Raíz cuadrada de 25: " << sqrt(25) << endl;
    cout << "Seno de 90 grados: " << sin(90 * M_PI / 180) << endl;
    return 0;
}