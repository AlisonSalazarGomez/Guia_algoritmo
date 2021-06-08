#include <iostream>
/*Dado un conjunto de valores enteros, calcular e informar
a) cuántos valores cero hubo.
b) promedio de valores positivos.
c) sumatoria de valores negativos.
Resolver el ejercicio para los siguientes lotes de datos:
1) 167 valores enteros
2) N valores, donde el valor de N debe ser leído previamente
3) El conjunto de valores termina con un valor igual al anterior
4) Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si
la cantidad de ceros supera a cuatro
5) Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las
condiciones de 4) o si el promedio de positivos resulta mayor que seis.*/
using namespace std;

int main()
{
    setlocale(LC_ALL,"spanish");
    int num,sum_neg=0,sum_pos=0,cant_pos=0,cant_num=1;
    int cant_ceros=0,num_anterior=0,prom=0;
    cout << "Ingrese un número: ";
    cin>>num;
    do{
        num_anterior=num;
        if(num==0 && cant_num==1){
            cant_ceros++;
        }else{
            if(num>0 && cant_num==1){
               sum_pos+=num;
               cant_pos++;
            }
            if(cant_pos!=0 && cant_num==1){
               prom=sum_pos/cant_pos;
            }
        }
        cout<<"Ingrese un numero: ";
        cin>>num;
        cant_num++;
        if(num==0){
            cant_ceros++;
        }else{
            if(num>0){
               sum_pos+=num;
               cant_pos++;
            }
            if(cant_pos!=0){
               prom=sum_pos/cant_pos;
            }
        }
        if(num<0){
            sum_neg+=num;
        }
    }while(num_anterior!=num && cant_num<=167 && cant_ceros<=4 && prom<=6);
    cout<<"Cantidad de ceros:"<<cant_ceros<<endl;
    if(cant_pos!=0){
        cout<<"Promedio de los positivos:"<<prom<<endl;
    }
    cout<<"Sumatoria de negativos: "<<sum_neg<<endl;
    return 0;
}
