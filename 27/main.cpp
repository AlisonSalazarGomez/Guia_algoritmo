#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
/*Ej. MI-27: En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de
todos contra todos. Por cada partido disputado por un equipo se dispone de la siguiente
información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si
empata).*/
using namespace std;

int main()
{
    int nro_equipo,cant_equipos,cant_partidos,puntaje;
    char resultado[2];
    char resultado_char[100], resultado_equipos[1000],nro_equipo_char[10];
    cout << "Ingrese la cantidad de equipos que participaran en el torneo:";
    cin >>cant_equipos;
    for(int i=0; i<cant_equipos; i++){
        cout<<"ingrese el Nro.equipo:";
        cin>>nro_equipo;
        cout<<"Ingrese la cantidad de partidos jugados:";
        cin>>cant_partidos;
        for(int j=0; j<cant_partidos;j++){
            cout<<"Resultado del partido "<<j+1<<" : ";
            cin>>resultado;
            if(strcmp(resultado,"P")==0){
                puntaje+=0;
            }else{
                if(strcmp(resultado,"E")==0){
                    puntaje+=1;
                }else{
                    if(strcmp(resultado,"G")==0){
                        puntaje+=3;
                    }else{
                        cout<<"NO EXISTE ESE RESULTADO.";
                        j-=1;
                    }
                }
            }
        }
        std::sprintf(resultado_char,"%d",puntaje);
        std::sprintf(nro_equipo_char,"%d",nro_equipo);
        strcat(resultado_equipos,"Equipo ");
        strcat(resultado_equipos,nro_equipo_char);
        strcat(resultado_equipos," su puntaje es: ");
        strcat(resultado_equipos,resultado_char);
        strcat(resultado_equipos,"  ");
        puntaje=0;
    }
    cout<<"ESTOS SON LOS RESULTADOS FINALES!"<<endl;
    cout<<resultado_equipos;
    return 0;
}
