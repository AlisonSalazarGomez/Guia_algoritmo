#include <iostream>
#include <string.h>

using namespace std;
struct datos_integrante{
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo[10];
    char nivel_est[2];
    char indicador[20];
    int num_familia;
}dt[100];
struct datos_generales{
    //domicilio
    char avenida[20];
    char altura[10];
    char tipo_vivienda[2];
    int num_inte;
    int prome_ed;
}dg[100];

int main()
{
    int j=0,k=0,n=0,sumatotal=0,sum_alfb=0,dt_generles=0,familia_cant_inte=0,sum_edad,sum_total_edad,edad_prom,prom_general_edad;
    int N=0,P=0,S=0,T=0,f,m;
    char av_mayor[20],alt_mayor[20];
    do{
        fflush(stdin);
        cout<<"Datos de domicilio-----"<<endl;
        cout<<"Ingrese la av:"<<endl;
        cin.getline(dg[j].avenida,20,'\n');
        cout<<"Ingrese la altura:"<<endl;
        cin.getline(dg[j].altura,10,'\n');
        cout<<"Tipo de vivienda (C o D):";
        cin.getline(dg[j].tipo_vivienda,2,'\n');
        cout<<"Cantidad de integrantes:"<<endl;
        cin>>dg[j].num_inte;
        if(dg[j].num_inte!=0){

        sumatotal+=dg[j].num_inte;
        for(int i=0; i<dg[j].num_inte;i++){
            fflush(stdin);
            dt[k].num_familia=j;
            cout<<"\nNombre:";
            cin.getline(dt[k].nombre,20,'\n');

            cout<<"\nApellido:";
            cin.getline(dt[k].apellido,20,'\n');

            cout<<"\nSexo:";
            cin.getline(dt[k].sexo,10,'\n');

            cout<<"\nNivel de estudios:";
            cin.getline(dt[k].nivel_est,2,'\n');

            cout<<"\nEdad:";
            cin>>dt[k].edad;
            sum_edad+=dt[k].edad;
            sum_total_edad+=dt[k].edad;
            if(dt[k].nivel_est=="u"|| dt[k].nivel_est=="U"){
                strcpy(dt[k].indicador,"C");
            }else{
                if(dt[k].nivel_est!="u"||dt[k].nivel_est!="U"){
                    strcpy(dt[k].indicador,"I");

                    if((dt[k].nivel_est=="N"||dt[k].nivel_est=="n")&& dt[k].edad>10){
                        sum_alfb++;
                    }
                }
            }
            if(dt[k].nivel_est=="N" || dt[k].nivel_est=="n"){
                N++;
            }else{
                if(dt[k].nivel_est=="P"|| dt[k].nivel_est=="p"){
                   P++;
                }else{
                    if(dt[k].nivel_est=="S"|| dt[k].nivel_est=="s"){
                        S++;
                    }else{
                        if(dt[k].nivel_est=="T"||dt[k].nivel_est=="t"){
                            T++;
                        }
                    }
                }
            }
            //------contador de sexos-----
            if(dt[k].sexo=="f" || dt[k].sexo=="F"){
                f++;
            }else{
                if(dt[k].sexo=="m" || dt[k].sexo=="M"){
                    m++;
                }
            }
            k++;
        }
       }
        //promedio de edad por familia
        edad_prom=sum_edad/dg[j].num_inte;
        dg[j].prome_ed=edad_prom;
        sum_edad=0;
        //promedio de edad de la ciudad
        prom_general_edad=sum_total_edad/sumatotal;

        if(dg[j].num_inte>familia_cant_inte && (dg[j].tipo_vivienda=="d"||dg[j].tipo_vivienda=="D")){
            familia_cant_inte=dg[j].num_inte;
            strcpy(av_mayor,dg[j].avenida);
            strcpy(alt_mayor,dg[j].altura);

        }
        j++;
    }while(dg[j].num_inte!=0);
    cout << "------Personas que terminaron la primaria:" << endl;
    for(int i=0; i<sumatotal;i++){
        if((dt[i].nivel_est!=" " && (dt[i].nivel_est!="N"||dt[i].nivel_est!="n")) && (dt[i].nivel_est!="P"||dt[i].nivel_est!="p")){
            cout<<dt[i].nombre<<" "<<dt[i].apellido<<endl;
            cout<<dt[i].edad<<endl;
            cout<<dt[i].sexo<<endl;
            dt_generles=dt[i].num_familia;
            cout<<"-----Datos de domicilio-----"<<endl;
        }
    }
    if(sum_alfb!=0){
        cout<<"Porcentaje de analfabetismo: %"<<(sum_alfb*100)/sumatotal;
    }
    cout<<"Domicilio de la familia con mas integrantes:"<<av_mayor<<" "<<alt_mayor<<endl;
    cout<<"--------Edad promedio por familia-----"<<endl;
    for(int i=0; i<j;i++){
        cout<<"Familia "<<k+1<<". "<<dg[k].prome_ed;
    }
    cout<<"Promedio total de la ciudad:"<<prom_general_edad<<endl;
    cout<<"-------Cantidad de personas con estudios incompletos-----"<<endl;
    cout<<"No poseen ="<<N;
    cout<<"\nPrimaria="<<P;
    cout<<"\nSecundaria="<<S;
    cout<<"\nTerciario="<<T;
    cout<<"----------Porcentaje de sexos------"<<endl;
    cout<<"Femenino: %"<<(f*100)/sumatotal<<endl;
    cout<<"Masculino: %"<<(m*100)/sumatotal<<endl;
    return 0;
}
