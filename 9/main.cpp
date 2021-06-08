#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int m,a;
    cout<<"Ingrese el mes"<<endl;cin>>m;
    cout<<"Ingrese el año"<<endl;cin>>a;
    switch(m){
            case 1:case 3:
            case 5:case 7: case 8:
            case 10:case 12:
            cout<<"Este mes tiene 31 días.";
            break;
            case 4:case 6:case 9:case 11:
            cout<<"Este mes tiene 30 días.";
            break;
            case 2:
                if((a%4)== 0){
                    cout<<"Este mes tiene 29 días."<<endl;
                }else{
                    cout<<"Este mes tiene 28 días."<<endl;
                }
            break;
            default:
                    cout<<"No existe ese mes.";
    }
    cout<<"Fin del programa.";
    return 0;
}
