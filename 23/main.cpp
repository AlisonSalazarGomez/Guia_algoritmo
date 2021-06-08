#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"spanish");
    int num,max_neg,min_pos,min_rang;
    int cont=0,cont1=0,cont2=0,cont3=0,sum=0;
    do{
        cout<<"Ingrese un numero: ";
        cin>>num;
        cont3++;
        sum+=num;
        if(num<0){
            cont++;
            if(cont==1){
                max_neg=num;
            }
            if(num<=max_neg){
                max_neg=num;
            }
        }
        if(num>0){
            cont1++;
            if(cont1==1){
                min_pos=num;
            }
            if(num<=min_pos){
              min_pos=num;
            }
        }
        if( (num>= -17.3)&& (num<=26.9)){
            cont2++;
            if(cont2==1){
                min_rang=num;
            }
            if(num<=min_rang){
                min_rang=num;
            }
        }
    }while(num!=NULL);
    if(cont3==1){
        cout<<"NO SE INGRESARON VALORES.";
    }else{
        cout << "a) El valor máximo negativo: "<<max_neg << endl;
        cout << "b) El valor mínimo positivo: "<<min_pos << endl;
        cout << "c) El valor mínimo dentro del rango -17.3 y 26.9: "<<min_rang << endl;
        cout << "d) El promedio de todos los valores: "<<sum/cont3-1<< endl;
    }
    return 0;
}
