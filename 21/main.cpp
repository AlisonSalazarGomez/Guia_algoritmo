#include <iostream>
/*Dados N valores informar el mayor, el menor y en que posición del conjunto
fueron ingresados.*/
using namespace std;

int main()
{
    setlocale(LC_ALL,"spanish");
    int i,n,x,y,ma,me,pma,pme;
    cout<<"Ingrese la cantidad de numeros a ingresar:"<<endl;cin>>n;
    for(i=1;i<=n;i++){
        cout<<"ingrese un numero entero:"<<endl;cin>>x;

        if(i==1){
            ma=x;
            me=x;
        }
        if(x>=ma){
            ma=x;
            pma=i;
        }

        if(x<=me){
            me=x;
            pme=i;
        }
    }
    cout << "Numero mayor:"<<ma<<" en la posición "<<pma<< endl;
    cout << "Numero menor:"<<me<<" en la posición "<<pme<< endl;
    return 0;
}
