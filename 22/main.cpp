#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int fecha,may=0,men=0,cont=0;
    int l,l1;
    char mayor[30];
    char f[]="FIN";
    char menor[30];
    char nombre[30];
    do{
        cout<<"Ingrese el nombre de la persona:";
        cin>>nombre;
        cont++;
        if(strcmp(nombre,f)==0){
            break;
        }else{
            cout<<"ingrese la fecha de su nacimiento:";
            cin>>fecha;
            if(cont==1){
            men=fecha;
            may=fecha;
            }
            if(fecha>=men){
            men=fecha;
            strcpy(menor,nombre);
            }
            if(fecha<=may){
            may=fecha;
            strcpy(mayor,nombre);
            }
        }
    }while(strcmp(nombre,f)!=0);
    if(cont-1 != 0){
        cout<<"El mayor de todos es: "<<mayor<<endl;
        cout<<"El menor de todos es: "<<menor<<endl;
    }else{
        cout<<"NO SE INGRESARON NOMBRES.";
    }
    return 0;
}
