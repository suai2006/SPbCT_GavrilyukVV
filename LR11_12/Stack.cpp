#include "Stack.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Stack<int> a; // �������� �������������� �����
    Stack<double> b; // �������� ������������� �����
    Stack<char> c; //�������� ����������� �����
    int i;
    // ������������� ������ � ������������� ������
    a.push(1);
    b.push(99.3);
    a.push(2);
    b.push(-12.23);
    cout << a.pop() << " ";
    cout << a.pop() << " ";
    cout << b.pop() << " ";
    cout << b.pop() << "\n";

    // ������������ ����������� �����
    for (i = 0; i < 10; i++) c.push((char)'A' + i);
    for (i = 0; i < 10; i ++) cout << c.pop();
    cout << endl;

    return 0;
}

