#include <iostream>
/*Ej. MI-32: Una compa��a a�rea desea emitir un listado con los movimientos mensuales de
sus M vuelos al exterior. Para ello cuenta con la siguiente informaci�n. De cada vuelo
realizado el n�mero de vuelo, destino, y cantidad de asientos. De cada pasajero el n�mero de
pasaporte y el importe que abon� por el pasaje en d�lares.
La informaci�n finaliza con un n�mero de pasaporte igual a cero. Se pide emitir el siguiente
listado:*/
using namespace std;
struct datos_vuelo{
    int nro_vuelo;
    char destino[20];
    int asientos_tomados;
    int recaudacion;
};
struct datos_cliente{
    int pasaporte;
    int importe;
    struct datos_vuelo dt_vuelo;
}dato[100];
int main()
{
    int j=0,num_asientos,;
    do{
        cout<<"\nIngrese la cantidad de asientos por vuelo:";
        cin>>num_asientos;
        do{
           cout<<"\nNro de vuelo:";
           cin>>dato[j].dt_vuelo.nro_vuelo;
           cout<<"\nDestino:";
           cin.getline(dato[j].dt_vuelo.destino,20,'\n');
           cout<<"\nPasaporte:";
           cin>>dato[j].pasaporte;
           cout<<"\nImporte:";
           cin>>dato[j].importe;
           j++;
        }while(dato[j].pasaporte !=0 && num_asientos>=j );
    }while(dato[j].pasaporte!=0);
    cout << " " << endl;
    return 0;
}
