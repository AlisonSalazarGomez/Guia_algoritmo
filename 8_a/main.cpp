#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int a,b,c,A,B,C;
    cout << "Ingrese un lado"<<endl;cin>>a>>b>>c;
    cout << "Ingrese un ángulo"<<endl;cin>>A>>B>>C;
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
    return 0;
}
