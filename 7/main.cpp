#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int l1,l2,l3,h=0;
    cout << "Ingrese el valor del cateto 1" << endl;cin>>l1;
    cout << "Ingrese el valor del cateto 2" << endl;cin>>l2;
    cout << "Ingrese el valor de la hipotenusa"<< endl;cin>>l3;
    h = sqrt(pow(l1,2)+pow(l2,2));
    if(h == l3){
       cout<<"Es un triángulo"<<endl;
    }else{
        cout<<"No es un triángulo"<<endl;
    }
    cout<<"Fin de programa."<<endl;
    return 0;
}
