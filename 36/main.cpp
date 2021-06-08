#include <iostream>
/*Ej. MI-36: Dada la fracción P/Q, para P y Q naturales informar la mayor cantidad de
simplificaciones. Desarrolle y utilice una función que reciba dos números naturales y retorne el
menor factor común. Ej: 360/60 = 180/30 = 90/15 = 30/5 = 6/1*/
using namespace std;
int maximodivisor(int a, int b)
{
    int mcd,R;
    do{
        R=a%b;
        if(R==0){
            mcd=b;
        }else{
            if(R>0 && R<b){
                a=b;
                b=R;
            }
        }
    }while(R!=0);
    return mcd;
}
int main()
{
    int n1,n2;
    cout << "ingrese dos valores:" << endl;
    cin>>n1>>n2;
    cout<<"Simplificacion maxima: "<<n1/maximodivisor(n1,n2)<<"/"<<n2/maximodivisor(n1,n2);
    return 0;
}
