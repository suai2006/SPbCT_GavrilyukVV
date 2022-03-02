#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "UserClass.h"

template <class SType, class UserClass = UserClass> class Stack
 {

private:
    vector <SType> Bufer;
    UserClass *UClass = UserClass(SType);

    bool isEmpty() {
        if (Bufer.size() == 0) {
            return false;
        }
        return true;
    }

public:
    Stack() {}
    ~Stack() {}

    void push(const SType& i) {

        Bufer.push_back(i);        
        cout << "Втолкнули в стэк: ";
        cout << i << endl;
    }
    
    void pop () {
        if (isEmpty()) {
            
            cout << "Втолкнули из стэка: ";
            cout << Bufer.back() << endl;
            Bufer.pop_back();
        }
        else {
            cout << "Стэк пуст" << endl;
        }
        
    }
    Stack<SType>& operator=(const Stack<SType>& ob)
    {
        Bufer = ob.Bufer;
        return *this;
    }
    
};



int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    Stack<int> StackInt;

    for (int i = 0; i < 5; i++) {
        StackInt.push(i);
    }

    cout << endl;

    for (int i = 0; i <= 5; i++) {
        StackInt.pop();
    }

    cout << endl;
    cout << "Тестируем работу класса с вещественными числами" << endl;
    cout << endl;

    Stack<double> StackDouble;
    StackDouble.push(0.15);
    StackDouble.push(100.15);
    StackDouble.push(20.50);
    StackDouble.push(180.30);

    cout << endl;

    for (int i = 0; i <= 5; i++) {
        StackDouble.pop();
    }

    cout << endl;
    cout<< "Тестируем работу класса со строками" << endl;
    cout << endl;

    Stack<string> stack1;
    for (int i = 0; i < 5; i++) {
        stack1.push("строка "+to_string(i));
    }

    cout << endl;

    for (int i = 0; i <= 5; i++) {
        stack1.pop();
    }
    return 0;
}

