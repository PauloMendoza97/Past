#include <iostream>
using namespace std;

int main(){
    int num,i,a;
        cout<<"Ingrese un numero:"<<endl;
        cin>>a;
        if(a<0){
            a=a*(-1);
            }
        for(i=1;i<(a+1);i++){
            if(a%i==0){
                num++;
            }
        }
        if(num!=2){
            cout<<"No es Primo";
        }
        else{
            cout<<"Es Primo";
        }
    return 0;
} 
