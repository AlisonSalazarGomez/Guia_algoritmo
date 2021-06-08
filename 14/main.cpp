#include <iostream>
#include <fstream>
/*Dados 50 números enteros, informar el promedio de los mayores que 100 y la
suma de los menores que –10.*/
using namespace std;

int main()
{
    int i,contador=0,psuma=0,promedio=0;
    int num,suma;
    for(i=1; i<=3;i++){
        cout<<"Ingresar un numero entero:"<<endl; cin>>num;
        if(num<-10){
            suma+=num;
        }else if(num>100){
            psuma+=num;
            contador++;
        }
        if(contador!=0){
            promedio=psuma/contador;
        }
    }
    cout<<"El promedio de los numeros mayores a 100 es:"<<promedio<<endl;
    cout<<"La suma de los numeros menores a -10 es:"<<suma<<endl;
    return 0;
}
