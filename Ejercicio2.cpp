/*Pide un numero y muestra todos sus divisores usando un ciclo while*/

#include <iostream>
using namespace std;

int main() {
    int num, divisor = 1;
    
    cout << "Introduce un numero: ";
    cin >> num;
    
    cout << "Los divisores de " << num << " son: ";
    
    while (divisor <= num) {
        if (num % divisor == 0) {
            cout << divisor << " ";
        }
        divisor++;
    }
    
    return 0;
}
