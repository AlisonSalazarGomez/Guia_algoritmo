#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"spanish");
    int n,v,sum,prom,nsub,cont,nmi,nma=0,cont1=0;
    int p,cont2;
    do{
        cout<<"Ingrese el numero de sublote:"<<endl; cin>>n;
        cont1++;
        if(abs(n)!=n){
            break;
        }else{
            if(abs(n)==n){
                nsub=n;
                do{
                    cout<<"Ingresar variables para cada sublote: "<<endl;cin>>v;
                    sum+=v;
                    cont++;
                    if(cont==1){
                        nmi=v;
                    }
                    if((v<=nmi)&&(v!=0)){
                        nmi=v;
                    }
                    if(v>nma){
                        nma=v;
                        p=cont;
                    }
                }while(v!=0);
            }
            cout<<"El promedio del lote "<<nsub<<" es "<<sum/(cont-1)<<endl;
            cout<<"EL valor minimo del contenerdor "<<nsub<<" es el valor "<<nmi<<endl;
            if(v==0){
                cont=0;
                nmi=0;
            }
        }
    }while(abs(n)==n);
    if(cont1-1==0){
        cout<<"NO HAY SUBLOTES PARA EVALUAR.";
    }else{
        cout<<"El valor maximo se encuentra en el sublote "<<nsub<<" en la posición"<<p<< " con el valor de "<<nma<<endl;
    }
    return 0;
}
