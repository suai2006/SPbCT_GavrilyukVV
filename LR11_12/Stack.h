#pragma once
#include <iostream>
#include <iomanip>
const int SIZE = 100;
using namespace std;

template <class SType> 
class Stack {

private:
	SType stck[SIZE];
	int tos;
public:
	Stack();
	~Stack();
	void push(SType i);
	SType pop();

};

#include "Stack.inl"