/*Pide un numero (1-12) y muestra el numero de dias que tiene el mes correspondiente(sin año bisiesto).*/

#include <iostream>
using namespace std;

int main(){

    int N;
     cout << "Ingrese un numero del 1 al 12:\n";
     cin >> N;

     switch(N){
        case 1:
        cout << "El mes de enero tiene 31 dias\n";
        break;

         case 2:
        cout << "El mes de febreo tiene 28 dias\n";
        break;

         case 3:
        cout << "El mes de marzo tiene 31 dias\n";
        break;

         case 4:
        cout << "El mes de abril tiene 30 dias\n";
        break;

         case 5:
        cout << "El mes de mayo tiene 31 dias\n";
        break;

         case 6:
        cout << "El mes de junio tiene 30 dias\n";
        break;

         case 7:
        cout << "El mes de julio tiene 31 dias\n";
        break;

         case 8:
        cout << "El mes de agosto tiene 31 dias\n";
        break;

         case 9:
        cout << "El mes de septiembre tiene 30 dias\n";
        break;

         case 10:
        cout << "El mes de octubre tiene 31 dias\n";
        break;

         case 11:
        cout << "El mes de noviembre tiene 30 dias\n";
        break;

         case 12:
        cout << "El mes de diciembre tiene 31 dias\n";
        break;

        default:
        cout << "Ingrese un numero valido\n";
        break;

     }



    return 0;
}