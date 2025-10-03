// Programa que pregunte y requiera dos numeros, ademas de un signo de operacion
// +, -, *; y muestre el resultado de la operacion de la forma:
// Ex. 5 - 2 = 3
#include <iostream>
using namespace std;

int main () {
    int ValorA, ValorB, Signo;

        cout << "Inserte el valor A, para su problema matematico." << endl;
            cin >> ValorA;
        cout << "Ahora, ingrese el valor B." << endl;
            cin >> ValorB;
        cout << "Signo de operacion? (+    -   *)" << endl;
            cin >> Signo;
        cout << "A: " << ValorA << "\tSigno: " << (char)Signo << "\tB: " << ValorB << endl;

    return 0;
}