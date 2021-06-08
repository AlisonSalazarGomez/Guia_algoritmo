#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int i,tipo,suma,contador=0,contador1=0,contador2=0,contador3=0;
    char gravedad;
    for(i=1;i<=4;i++){
        cout<<"ingrese el tipo de infracción:"<<endl;cin>>tipo;
        cout<<"ingrese el tipo de gravedad 'L','M','G':"<<endl;cin>>gravedad;
        switch(tipo){
        case 1:
            if(gravedad == 'L'){
                contador++;
            }else{
                if(gravedad == 'M'){
                       contador1++;
                }else{
                    if(gravedad == 'G'){
                        contador2++;
                    }
                }
            }
        break;
        case 2:
            if(gravedad == 'L'){
                contador++;
            }else{
                if(gravedad == 'M'){
                       contador1++;
                }else{
                    if(gravedad == 'G'){
                        contador2++;
                    }
                }
            }
        break;
        case 3:
            if(gravedad == 'L'){
                contador++;
            }else{
                if(gravedad == 'M'){
                       contador1++;
                }else{
                    if(gravedad == 'G'){
                        contador3++;
                    }
                }
            }
        break;
        case 4:
            if(gravedad == 'L'){
                contador++;
            }else{
                if(gravedad == 'M'){
                       contador1++;
                }else{
                    if(gravedad == 'G'){
                        contador3++;
                    }
                }
            }
        break;
        default:
        cout<<"El tipo de caso no existe:"<<endl;
        }
    }
    if(contador3<=3){
        cout<<"La deuda a pagar es:"<<"$"<<contador*1000+contador1*2000+contador2*3000+contador3*3000<<" "<<"pesos"<<endl;
    }else{
        cout<<"Clausurar fabrica"<<endl;
    }
    cout<<"Fin del programa";
    return 0;
}
