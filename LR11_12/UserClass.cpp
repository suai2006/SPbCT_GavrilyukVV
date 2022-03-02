#include "UserClass.h"

UserClass::UserClass()
{
    cout << "UserClass инициализирован" << endl;
}

UserClass::~UserClass()
{
    cout << "UserClass разрушен" << endl;
}

UserClass& UserClass::operator=(const UserClass& ob)
{
    return *this;
}
