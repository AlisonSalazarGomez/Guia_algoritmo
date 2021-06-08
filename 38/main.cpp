#include <iostream>

using namespace std;
int EdadAGrupoEtario (int edad)
{
    int grupo;
    if(edad<=14){
        grupo=1;
    }else{
        if(edad>14 && edad<=21){
            grupo=2;
        }else{
            if(edad>21 && edad<=28 ){
                grupo=3;
            }else{
                if(edad>28 && edad<=35){
                    grupo=4;
                }else{
                    if(edad>35 && edad<=42){
                        grupo=5;
                    }else{
                        if(edad>42 && edad<=49){
                            grupo=6;
                        }else{
                            if(edad>49 && edad<=63){
                                grupo=7;
                            }else{
                                grupo=8;
                            }
                        }
                    }
                }
            }
        }
    }
    return grupo;
}
int main()
{
    int num;
    cout << "Ingrese su edad:" << endl;
    cin>>num;
    cout << "Pertenece al grupo:"<<EdadAGrupoEtario(num);
    return 0;
}
