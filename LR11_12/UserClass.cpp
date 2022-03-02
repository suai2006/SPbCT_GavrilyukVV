#include "UserClass.h"

UserClass::UserClass(){}

UserClass::~UserClass(){}

UserClass& UserClass::operator=(const UserClass& ob){
    return *this;
}
ostream& operator<<(ostream& out, const UserClass& ob) {
	out << "UserClass";
	return out;
}


