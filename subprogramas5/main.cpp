#include <iostream>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
string raices(float a, float b,  float c)
{
    setlocale(LC_ALL,"spanish");
    char raiz[50],r1_ch[10],r2_ch[10];
    float r,r1,r2;
    r=pow(b,2)-4*a*c;
    if(a==0){
        strcat(raiz,"NO SE PUEDE RESOLVER");
    }else{
        if(r==0){
            r1=-b/(2*a);
            sprintf(r1_ch,"%d",r1);
            strcat(raiz,"x= ");
            strcat(raiz,r1_ch);
        }else{
            if(r>0){
               r1=(-b+(sqrt(r)))/(2*a);
               sprintf(r1_ch,"%d",r1);
               r2=(-b-(sqrt(r)))/(2*a);
               sprintf(r2_ch,"%d",r2);
               strcat(raiz,"x1= ");
               strcat(raiz,r1_ch);
               strcat(raiz," x2= ");
               strcat(raiz,r2_ch);
           }else{
               strcat(raiz,"No se encontraron raices pertenecientes a los reales");
           }
       }
    }
    return raiz;
}
int main()
{
    float a,b,c,r=0;
    cout << "Ingrese el valor de a:";
    cin>>a;
    cout << "Ingrese el valor de b:";
    cin>>b;
    cout << "Ingrese el valor de c:";
    cin>>c;
    r=pow(b,2)+(-4*a*c);
    if(a==0){
        cout<<raices(a,b,c);
    }else{
        if(r==0){
        cout<<"La unica raiz es: "<<raices(a,b,c);
        }else{
            if(r>0){
               cout<<"Las raices son: "<<raices(a,b,c);
            }else{
               cout<<raices(a,b,c);
            }
        }
    }
    return 0;
}
