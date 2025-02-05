#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 65001 >nul");
    vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar un número al final

    cout << "Elementos del vector: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "El tamaño del vector es: " << numeros.size() << endl;
    return 0;
}