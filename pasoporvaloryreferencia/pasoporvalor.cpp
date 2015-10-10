#include <iostream> 
using namespace std;
 
int funcion(int n, int m);
 
int main(){ 
    int a=1, b=2; 
    cout << "a, b = " << a << ", " << b <<endl; 
    cout << "funcion(a, b) = " << funcion(a, b) << endl;
    cout << "a, b = " << a << ", " << b <<endl; 
    return 0; 
}
 
int funcion(int n, int m){ 
    n = n + 2; 
    m = m - 1; 
    return n + m; 
}
