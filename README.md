# 10
#include <iostream>
using namespace std;

void ordenar(int x[]){
    int cambio;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(x[j]<x[j+1]){
                cambio=x[j];
                x[j]=x[j+1];
                x[j+1]=cambio;
                }
            }
        }
    }

        int main(){

        int x[10],i;
        for(i=0;i<10;i++){
            cout<<"Ingresa un numero: ";
            cin>>x[i];
            }
            cout<<"Numeros ordenados: "<<endl;
            ordenar(x);
            for(int i=0;i<10;i++)
                cout<<x[i]<<endl;
            return 0;
        } 
