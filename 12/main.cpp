#include <iostream>
#include <math.h>
using namespace std;
//Informar los primeros 100 números naturales y su sumatoria
int main()
{
    int i,suma=0;
    for(i=0;i<=100;i++){
        cout<<i<<endl;
        suma+=i;
    }
    cout<<"suma:"<<suma<<endl;
    return 0;
}
