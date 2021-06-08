#include <iostream>
/*3) Escriba un programa que permita al usuario:
• Leer tres números.
• Obtener el promedio.
• Obtener el mayor de ellos.
• Salir del programa.
*/
using namespace std;
int promedio(int n1, int n2,int n3)
{
    int suma;
    float p;
    suma=n1+n2+n3;
    p=suma/3;
    return p;
}
int mayor(int n1,int n2,int n3){
    int ma;
    if(n1>n2 && n1>n3){
        ma=n1;
    }
    if(n2>n1 && n2>n3){
        ma=n2;
    }
    if(n3>n1 && n3>n2){
        ma=n3;
    }
    return ma;
}
int main()
{
    int n1,n2,n3;
    cout << "Ingrese tres numeros:" << endl;
    cin>>n1>>n2>>n3;
    cout<<"El promedio de los tres numeros es: "<<promedio(n1,n2,n3)<<endl;
    cout<<"El mayor de todos es: "<<mayor(n1,n2,n3)<<endl;
    return 0;
}
