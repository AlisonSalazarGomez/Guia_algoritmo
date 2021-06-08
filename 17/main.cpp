#include <iostream>

using namespace std;
/*Se ingresa un conjunto de valores float, cada uno de los cuales representan el
sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.*/
int main()
{
    setlocale(LC_ALL,"spanish");
    float sueldo;
    int contador1=0,contador2=0,contador3=0,contador4=0;
    do{
        cout<<"ingresar el sueldo del empleado:"<<endl;cin>>sueldo;
        if((1.520>sueldo)&& sueldo!=0){
            contador1++;
        }else{
            if((sueldo>=1.520)&& sueldo<2.780){
                contador2++;
            }else{
                if((sueldo>=2.780)&&sueldo<5.999){
                    contador3++;
                }else{
                    if(sueldo>=5.999){
                        contador4++;
                    }
                }
            }
        }
    }while(sueldo!=0);
    cout << "empleados ganan menos $1.520:" <<contador1<< endl;
    cout << "ganan $1.520 o más pero menos de $2.780:" <<contador2<< endl;
    cout << "ganan $2.780 o más pero menos de $5.999:" <<contador3<< endl;
    cout << "ganan $5.999 o más:" <<contador4<< endl;
    return 0;
}
