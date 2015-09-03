# 10
#include <iostream>
using namespace std;
int main(){
    int x[10];
    int i;
        for(i=0;i<10;i++){
            cin>>x[i];
        }
        ordenar(x);
        for(i=0;i<10;i++){
            cout<<x[i]<<" ";
        }
    return 0;
}
void ordenar(int x[10]){
    int cambio,i,j;
    for(i=1;i<10;i++){
        for(j=0;j<9;j+1){
            if(x[j]>x[j+1]){
                cambio=x[j];
                x[j]=x[j+i];
                x[j+1]=cambio
                }
            }
        }
    }
