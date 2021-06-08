#include <iostream>
#include <string.h>

using namespace std;
/*Ej. MI-28: Dada una serie de caracteres que conforman una oración, donde cada palabra está
separada de la siguiente por un carácter blanco y la oración finaliza con un punto. Se pide
informar:
a) cantidad de veces que apareció cada vocal
b) cantidad de palabras que contiene la oración
c) cantidad de letras que posee la palabra más larga.*/
int main()
{
    setlocale(LC_ALL,"spanish");
    int a=0,e=0,i=0,o=0,u=0;
    int palabra_mas_larga=0,cant_letras=0,cant_palabras=0;
    char oracion[100];

    cout << "Ingrese una oración:"<< endl;
    cin.getline(oracion,100,'.');

    for(int j=0;j<strlen(oracion);j++){
            switch(oracion[j]){
            case 'A': case 'a':
            a++;
            break;
            case 'E': case 'e':
            e++;
            break;
            case 'I': case 'i':
            i++;
            break;
            case 'O': case 'o':
            o++;
            break;
            case 'U': case 'u':
            u++;
            break;
            }
            if(oracion[j]!=' '){
                cant_letras++;
                if(cant_letras>palabra_mas_larga){
                    palabra_mas_larga=cant_letras;
                }
            }else{
                if(oracion[0]!= ' '&& oracion[j]==' '){
                    cant_letras=0;
                    cant_palabras++;
                }
            }
    }
    cout<<"a) cantidad de veces que aparecio la vocal"<<endl<< "a= " <<a<< " e= "<<e<<" i= "<<i<<" o= "<<o<<" u= "<<u<<endl;
    cout<<"b) cantidad de palabras que contiene la oración: "<<cant_palabras+1<<endl;
    cout<<"c) cantidad de letras que posee la palabra más larga: "<<palabra_mas_larga<<endl;
    return 0;
}
