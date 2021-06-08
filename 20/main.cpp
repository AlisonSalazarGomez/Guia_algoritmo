#include <iostream>

using namespace std;

int main()
{
    int i,x,y=0;
    for(i=1;i<=10;i++){
        cout<<"Ingrese un numero"<<endl;cin>>x;
        if(i==1){
            y=x;
        }
        if(x>y){
            y=x;
        }
    }
    cout <<"EL NUMERO MAS ALTO DE LOS INGRESADOS ES:"<<y<<endl;
    return 0;
}
