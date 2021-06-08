#include <iostream>

using namespace std;
void modulo(int num){
    int abst;
    if(num<0){
        cout<<"MODULO:"<<-num;
    }else{
        cout<<"MODULO:"<<num;
    }
    return;
}
int main()
{
    int num;
    cout << "Ingrese un numero: " << endl;
    cin>>num;
    modulo(num);
    return 0;
}
