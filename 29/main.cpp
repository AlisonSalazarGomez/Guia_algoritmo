#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
// I=1,V=5,X=10,L=50,C=100,M=1000
int main()
{
    setlocale(LC_ALL,"spanish");
    int num,i=0,x=0,c=0,m=0;
    int conm=1,conc=1,conx=1,conti=1;
    char romano[20];
    cout<<"Ingrese un número:";
    cin>>num;
    if(num==0 || num<0){
        cout<<"Según la nomenclatura romana, esta empieza a partir del uno, por lo que el 0 y los números negativos no pueden ser (y no fueron) representados por el sistema de numeración romano.";
    }else{
        if(num>3999){//
            cout<<"No esta dentro del rango de representación.";
        }else{
            if(num>1000){
                m=(num-(num%1000))/1000;
                while(m>=conm){
                    strcat(romano,"M");
                    conm++;
                }
            }else{//centenas
                if(num<1000&&num>99){
                    c=(num-(num%100))/100;
                     while(c>=conc){
                        if(c<4){
                            strcat(romano,"C");
                            conc++;
                        }else{
                            if(conc==1&&c>5){
                                conc+=5;
                                strcat(romano,"D");
                            }
                            if(c>5 && c<9){
                                strcat(romano,"C");
                                conc++;
                            }
                        }
                        if(c==5){
                            conc+=4;
                            strcat(romano,"D");
                        }
                        if(c==9){
                            conc+=8;
                            strcat(romano,"CM");
                        }
                     }
                }
                //decenas
                if(num<100&&num>9){
                    x=(num-(num%10))/10;
                    while(x>=conx){
                        if(x<4){
                            strcat(romano,"X");
                            conx++;
                        }else{
                            if(conx==1 && x>5){
                                conx+=5;
                                strcat(romano,"L");
                            }
                            if(x>5 && x<9){
                                strcat(romano,"X");
                                conx++;
                            }
                        }
                        if(x==5){
                            conc+=4;
                            strcat(romano,"L");
                        }
                        if(x==9){
                            conc+=8;
                            strcat(romano,"XC");
                        }
                    }
                }
                if(num<10&&x>0){
                    i=(num-(num%1))/1;
                    while(i>=conti){
                        if(i<4){
                            strcat(romano,"I");
                            conti++;
                        }else{
                            if(conti==1&&i>5){
                                conti+=5;
                                strcat(romano,"V");
                            }
                            if(i>5&&i<9){
                                strcat(romano,"I");
                            }
                        }
                        if(i==5){
                            strcat(romano,"V");
                        }
                        if(i==9){
                            strcat(romano,"IX");
                        }
                    }
                }
            }
        }
    }
    if(strlen(romano)!=0){
        cout<<"ROMANO: ";
        for(int i=0;i<strlen(romano);i++){
            cout<<romano[i];
        }
    }
    return 0;
}
