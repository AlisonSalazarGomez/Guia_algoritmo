#include <iostream>

using namespace std;
int productovectorial(int num)
{
    int producto=1;
    for(int i=1;i<=num;i++){
        producto*=i;
    }
    return producto;
}
int main()
{
    setlocale(LC_ALL,"spanish");
    int num;
    cout<<"Ingrese un n�mero: ";
    cin>>num;
    cout<<"EL producto facortial de dicho n�mero es: "<<productovectorial(num)<<endl;
    return 0;
}
