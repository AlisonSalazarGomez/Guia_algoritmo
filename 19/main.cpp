#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*double x;
    cout<<"ingresar la cantidad maxima a buscar de numeros multiplos de 3:"<<endl;cin>>x;
    for(int i=0;i>=x;i=i-3){
        if((i%5)!=0){
            cout<<"Multiplo:"<<i<<endl;
        }
    }*/
    int numero;
    int contador,i;
    for(i=1;i>=0;i++){
        cout<<"ingresar un numero:"<<endl;cin>>numero;
        if(numero!= abs(numero)*-1){
            contador++;
        }
    }
    cout<<"La cantidad de números ingresados es:"<<contador<<endl;
    return 0;
}
