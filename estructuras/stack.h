#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class Stack1
{
private:
	vector<T> pila;
public:
	bool vacio();
	int tamano();
	T top();
	void push(T x);
	void pop();
	void print();
	Pila<T> operator+ (Pila<T> pila1);
	Pila<T> operator- (Pila<T> pila1);
	
};
