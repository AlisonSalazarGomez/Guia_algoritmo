#include <iostream>
#include <math.h>
using namespace std;
/*Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados.*/
int main()
{
    double numero,contador;
    do{
        cout<<"Ingrese un numero"<<endl;cin>>numero;
        contador++;
    }while(numero!=(-1*abs(numero)));
    if(contador-1==0){
        cout<<"NO SE INGRESARON VALORES.";
    }else{
         cout<<"cantidad de numero ingresados: "<<contador-1<< endl;
    }
    return 0;
}
