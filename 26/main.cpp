#include <iostream>
#include <string.h>
#include <stdlib.h>
/*Ej. MI-26: Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:

- Identificación del contenedor

- 5 -
- Peso del contenedor en kg
- Puerto de arribo(un valor de 1 a 3).

Se pide calcular e informar:

1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto*/
using namespace std;

int main()
{
    int num_contenedor, peso_contenedor, num_puerto;
    int sum_peso=0, mas_pesado=0, iden_contenedor=0, p1=0, p2=0, p3=0;
    for(int i=0; i<100; i++){
        cout<<"INGRESE EL NUMERO DE CONTENEDOR: ";
        cin >> num_contenedor;
        cout<<"INGRESE EL PESO DEL CONTENEDOR: ";
        cin >> peso_contenedor;
        cout<<"INGRESE EL NUMERO DE PUERTO QUE SEA SU DESTINO:";
        cin >> num_puerto;
        sum_peso+=peso_contenedor;
        if(peso_contenedor > mas_pesado){
            mas_pesado = peso_contenedor;
            iden_contenedor = num_contenedor;
        }
        switch(num_puerto){
        case 1:
            p1++;
            break;
        case 2:
            p2++;
            break;
        case 3:
            p3++;
            break;
        default:
            cout << "NO EXISTE ESTE PUERTO.";
        }
    }
    cout << "El peso total que el buque debe trasladar: "<< sum_peso << endl;
    cout << "La identificación del contenedor de mayor peso: "<< iden_contenedor << endl;
    cout << "La cantidad de contenedores que debe trasladar a cada puerto:"<<endl<< "PUERTO 1: "<<p1<<endl<<"PUERTO 2: "<<p2<<endl<<"Puerto 3: "<<p3;
    return 0;
}
