#include <iostream>
#include "stack.h"

template<typename T>
bool Stack1<T>::vacio()
{
	if(pila.empty())
	{
		return true;
	}
	return false;
}

template<typename T>
int Stack1<T>::tamano()
{
	return pila.size();
}

template<typename T>
T Stack1<T>::top()
{
	return pila.back();
}

template<typename T>
void Stack1<T>::push(T x)
{
	pila.push_back(x);
}

template<typename T>
void Stack1<T>::pop()
{
	pila.pop_back();
}

template<typename T>
void Stack1<T>::print()
{
	for(int i=0; i<pila.size(); i++){
		cout<<pila[i]<<" ";
	}
	cout<<endl;
}

template class Stack1<int>;
