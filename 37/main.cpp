#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia(int A ,int B)
{
    float porcentaje;
    porcentaje=(B-A) *100 / (A+B);
    return porcentaje;
}
int main()
{
    int n1,n2;
    cout << "Ingrese dos valores:" << endl;
    cin>>n1>>n2;
    cout << "Diferencia de porcentajes: %"<<CalcularPorcentajeDiferencia(n1,n2);
    return 0;
}
