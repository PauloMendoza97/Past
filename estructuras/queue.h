#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class Queue1
{
private:
	vector<T> cola;
public:
	bool vacio();
	int tamano();
	T front();
	T back();
	void push(T valor);
	void pop();
	void print();
	Cola<T> operator+ (Cola<T> cola1);
	Cola<T> operator- (Cola<T> cola1);
};
