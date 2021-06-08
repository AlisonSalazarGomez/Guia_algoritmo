#include <iostream>

using namespace std;
//ejercicio 4
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int numero, resto=0;
    float quinta=0,septima=0;

    cout<<"\ningrese un numero entero";cin>>numero;

    quinta=numero/5;
    resto=numero%5;
    septima=quinta/7;


    cout<<"\nLa quinta parte es:"<<quinta<<endl;
    cout<<"\nEL resto es:"<<resto<<endl;
    cout<<"\nLa septima parte es:"<<septima<<endl;

    return 0;
}
