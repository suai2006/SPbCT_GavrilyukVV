#pragma once

#include "Stack.h"
template<class SType>
inline Stack<SType>::Stack()
{
	tos = 0;	
	cout << "Stack Initialized\n";
}

template<class SType>
inline Stack<SType>::~Stack()
{
	cout << "Stack Destroyed\n";
}

template<class SType>
inline void Stack<SType>::push(SType i)
{
	if (tos == SIZE) {
		cout << "Stack is full. \n";
		return;
	}
	stck[tos] = i;
	tos++;
}

template<class SType>
inline SType Stack<SType>::pop()
{
	if(tos == 0) {
		cout << "Stack underflow.\n";
		return 0;
	}
	cout << endl;
	cout << stck[tos] << " Pop from stack." <<  endl;
	tos --;
	return stck[tos];
}
