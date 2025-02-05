#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

    system("chcp 65001 >nul");

    if (argc < 3) { // Se esperan al menos 2 argumentos adicionales
        cerr << "Error: Debes proporcionar al menos dos argumentos.\n";
        cerr << "Uso: ./" << argv[0] << " <nombre> <edad> <ciudad> <país>\n";
        return 1; // Código de error
    }

    cout << "Nombre del programa: " << argv[0] << endl;
    cout << "Argumentos recibidos:\n";

    cout << "  Nombre: " << argv[1] << endl;
    cout << "  Edad: " << argv[2] << " años" << endl;

    if (argc >= 4) cout << "  Ciudad: " << argv[3] << endl;
    if (argc >= 5) cout << "  País: " << argv[4] << endl;

    cout << "Ejecución finalizada correctamente.\n";
    return 0; // Éxito
}
