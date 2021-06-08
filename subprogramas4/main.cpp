#include <iostream>
/*4) Elabore un procedimiento que reciba tres parámetros, n1, n2 y mayor. A través del
parámetro “mayor” devuelva el mayor número entre n1 y n2.*/
using namespace std;

void maximo(int n1, int n2, int &mayor)
{
    if(n1>n2){
        mayor=n1;
    }else{
        mayor=n2;
    }
    return;
}
int main()
{
    int n1,n2;
    int mayor;

    cout << "Ingrese dos numeros:"<<endl;
    cin>>n1>>n2;
    maximo(n1,n2,mayor);
    cout<<"numero mayor:"<<mayor;
    return 0;
}
