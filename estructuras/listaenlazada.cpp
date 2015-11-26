#include <iostream>
#include "listaenlazada.h"

template<typename T>
typename vector<T>::iterator Lista<T>::begin()
{
	return lista1.begin();
}

template<typename T>
typename vector<T>::iterator Lista<T>::end()
{
	return lista1.end();
}

template<typename T>
bool Lista<T>::vacia()
{
	if (lista1.empty()){
		return true;
	}
	return false;
}

template<typename T>
int Lista<T>::tamano()
{
	return lista1.size();
}

template<typename T>
void Lista<T>::insertar(int posicion, T x)
{
	lista1.insert(lista1.begin() + posicion, x );
}

template<typename T>
void Lista<T>::borrar(int posicion)
{
	lista1.erase(lista1.begin() + posicion);
}

template<typename T>
void Lista<T>::pushfront(T x)
{
	lista1.insert(lista1.begin(), x);
}

template<typename T>
void Lista<T>::pushback(T x)
{
	lista1.insert(lista1.end(), x);
}

template<typename T>
void Lista<T>::popfront()
{
	lista1.erase(lista1.begin());
}

template<typename T>
void Lista<T>::popback()
{
	lista1.erase(lista1.end());
}

template<typename T>
void Lista<T>::print()
{
	for(int i=0;i<lista1.size();i++)
	{
		cout<<lista1[i]<<" ";
	}
	cout<<endl;
}

template<typename T>
Lista<T> Lista<T>::operator+ (Lista<T> l)
{
	Lista<T> tmp;
	tmp.lista1.insert(tmp.begin(), lista1.begin(), lista1.end());
	tmp.lista1.insert(tmp.end(),l.lista1.begin(), l.lista1.end());
	return tmp;
}

template class Lista<int>;
