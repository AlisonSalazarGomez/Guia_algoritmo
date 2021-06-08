#include <iostream>
#include <math.h>
using namespace std;
/*ejercicio 8 de algoritmo. Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir
una leyenda según sea: equilátero, isósceles o escálenos.*/

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int a,b,c,h,A,B,C;
    cout << "Ingrese el lado a" << endl;cin>>a;
    cout << "Ingrese el lado b" << endl;cin>>b;
    cout << "Ingrese el lado c" << endl;cin>>c;

    A=acos((pow(a,2)-pow(b,2)-pow(c,2))/(-2*(b*c)));
    B=acos((pow(b,2)-pow(a,2)-pow(c,2))/(-2*(a*c)));
    c=acos((pow(c,2)-pow(a,2)-pow(b,2))/(-2*(a*b)));
    if((A+B+C)!=180){
        cout<<"No es un triángulo."<<endl;
    }else{
        if((A==90||B==90||C==90)){
            cout<<"No es un triángulo isoceles, equilatero o escaleno"<<endl;
        }else{
            if((a==b&&a==c&&b==c&&b==a&&c==a&&c==b) && (A==B&&A==C&&B==C&&B==A&&c==A&&C==B)){
                cout<<"Es un triángulo equilatero."<<endl;
            }else{
                if((a=b&&(c!=a&&c!=b)) && (A=B&&(C!=A&& C!=B))){
                        cout<<"Es un triángulo iósceles."<<endl;
                }else
                cout<<"Es un triángulo escaleno"<<endl;
            }
        }
    }
    cout<<"Fin del programa"<<endl;
    return 0;
}
