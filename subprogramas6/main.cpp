#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
void menu()
{
    setlocale(LC_ALL,"spanish");
    cout<<"\ni - Inggresar numeros"<<endl;
    cout<<"a – Sumar los números"<<endl;
    cout<<"b – Restar los números"<<endl;
    cout<<"c – Multiplicarlos"<<endl;
    cout<<"d – Realizar la división n1/n2"<<endl;
    cout<<"Esc - Salir"<<endl;
}
void ingreso(int &n1, int &n2)
{
    cout<<"Ingrese el valor de n1:";
    cin>>n1;
    cout<<"Ingrese el valor de n2:";
    cin>>n2;
    return;
}
int sumar(int n1,int n2)
{
    int sum=0;
    sum=n1+n2;
    return sum;
}
int resta( int n1,int n2)
{
    int res=0;
    res=n1-n2;
    return res;
}
int multiplicar(int n1,int n2)
{
    int mult=0;
    mult=n1*n2;
    return mult;
}
float division(int n1, int n2)
{
    float div=0;
    div=n1/n2;
    return div;
}
int main()
{
    int n1,n2;
    char op;
    do{
        menu();
        op=getch();
        switch(op)
        {
        case 'i': case 'I':
            ingreso(n1,n2);
        break;
        case 'a': case 'A':
            cout<<"sumatoria: "<<sumar(n1,n2)<<endl;
        break;
        case 'b': case 'B':
            cout<<"Resta: "<<resta(n1,n2)<<endl;
        break;
        case 'c': case 'C':
            cout<<"Multiplicación: "<<multiplicar(n1,n2)<<endl;
        break;
        case 'd': case 'D':
            cout<<"División: "<<division(n1,n2)<<endl;
        break;
        }
    }while((int)op!=27);
    return 0;
}
