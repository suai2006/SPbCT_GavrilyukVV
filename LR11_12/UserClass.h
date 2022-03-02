#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
class UserClass
{
private:
public:
	UserClass();
	~UserClass();
	UserClass& operator=(const UserClass& ob);
	friend ostream& operator<<(ostream& out, const UserClass& ob);// для перегрузки вывода на экран
	
};