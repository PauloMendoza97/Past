#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class Lista {
private:
	vector<T> lista1;
public:
	typename vector<T>::iterator begin();
	typename vector<T>::iterator end();
	bool vacia();
	int tamano();
	void insertar(int posicion, T x);
	void borrar(int posicion);
	void pushfront(T x);
	void pushback(T x);
	void popfront();
	void popback();
	void print();
	Lista<T> operator+ (Lista<T> l);
	Lista<T> operator- (Lista<T> l);
};
