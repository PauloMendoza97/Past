#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n==1 || n==2){
        return 1;
    }
    else if (n==0){
        return 0;
    } 
    else{
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main(){
    int fibo;
    cout<<"Fibonacci"<<endl;
    cout<<"Ingrese el numero que desea: ";
    cin>>fibo;
    cout<<"El numero es: "<<fibonacci(fibo);
    return 0;
}
