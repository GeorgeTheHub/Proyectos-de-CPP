// Programa que pregunte y requiera dos numeros, ademas de un signo de operacion
// +, -, *; y muestre el resultado de la operacion de la forma:
// Ex. 5 - 2 = 3
#include <iostream>
using namespace std;

int main () {
    int ValorA, ValorB;
    char Signo;

        cout << "Inserte el valor A, para su problema matematico." << endl;
            cin >> ValorA;
                if (cin.fail()) {
                cout << "Entrada negada. No es un numero entero." << endl;
                return 1;
                }
                
        cout << "Ahora, ingrese el valor B." << endl;
            cin >> ValorB;
                if (cin.fail()) {
                cout << "Entrada negada. No es un numero entero." << endl;
                return 1;
                }
                
        cout << "Signo de operacion? ( + | - | * )" << endl;
            cin >> Signo;
                
        cout << "\n" << "Orden: A " << Signo << " B" << endl;

        cout << "Operacion: " << ValorA << " " << Signo << " " << ValorB << " = ";
        if (Signo == '+'){
            cout << ValorA + ValorB << endl;
            cout << "SUMA CONCRETADA!" << endl;
        }
        else if (Signo == '-'){
            cout << ValorA - ValorB << endl;
            cout << "RESTA CONCRETADA!" << endl;
        }
        else if (Signo == '*'){
            cout << ValorA * ValorB << endl;  
            cout << "MULTIPLICACION CONCRETADA!" << endl;
        }
        else {
            cout << "Operador fuera de rango, intente de nuevo." << endl;
        }
        
    return 0;
}
