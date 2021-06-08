#include <iostream>
#include <math.h>//esto es para usar la libreria de caracteres matematicos como "pow()" que seria potenciación
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");//esto es para usar caracteres especiales
    //creo las variables para luego almacenar un valor
    int a,b;
    cout << "Ingrese un número entero:" << endl;cin>>a>>b;//pido que el usuario m ingrese los valores para seguir con la parte logica.

    if(a==b){//
        cout<<"Los números son iguales."<<endl;//imprimo una leyenda en caso de que sean iguales.
    }else{
        if(a>b){//condicion de que a sea mayor sale la linea 15
            cout<<"EL número mayor es: "<<a<<endl;
        }else{//como no se cumplio se dice automaticamente que b es mayor
            cout<<"EL número mayor es: "<<b<<endl;
        }
    }
    cout<<"Fin del programa."<<endl;
    return 0;
}
