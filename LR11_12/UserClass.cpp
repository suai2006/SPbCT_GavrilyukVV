#include "UserClass.h"

UserClass::UserClass()
{
    cout << "UserClass ���������������" << endl;
}

UserClass::~UserClass()
{
    cout << "UserClass ��������" << endl;
}

UserClass& UserClass::operator=(const UserClass& ob)
{
    return *this;
}
