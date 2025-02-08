#include <iostream>

using namespace std;

int main() {
   
    int NumeroCuenta;
    double SaldoInicial, TotalCargos, TotalCreditos, LimiteCredito, NuevoSaldo;

   
    cout << "Ingrese el numero de cuenta: ";
    cin >> NumeroCuenta;
    cout << "Ingrese el saldo inicial del mes: ";
    cin >> SaldoInicial;
    cout << "Ingrese el total de cargos en el mes: ";
    cin >> TotalCargos;
    cout << "Ingrese el total de creditos aplicados: ";
    cin >> TotalCreditos;
    cout << "Ingrese el limite de creditos permitido: ";
    cin >> LimiteCredito;

  
    NuevoSaldo = SaldoInicial + TotalCargos - TotalCreditos;

    cout << "\nEl nuevo saldo de la cuenta " << NumeroCuenta << " es: " << NuevoSaldo << endl;

    if (NuevoSaldo > LimiteCredito) {
        cout << "Se excedio el limite de sus creditos." << endl;
    }

    return 0;
}
