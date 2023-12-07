#include <iostream>
#include "MyStack.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0, el, size;
    cout << "*�������� �����*\n������� ������: ";
    cin >> size;
    TStack<int> stack(size);
    while (num != 6)
    {
        cout << "\n1. �������� �������\n";
        cout << "2. ������� �������\n";
        cout << "3. ���������� ������� �������\n";
        cout << "4. ������\n";
        cout << "5. ������� ����\n";
        cout << "6. �����\n";
        cout << "����: ";
        cin >> num;
        cout << endl;
        switch (num)
        {
        case 1:
            cout << "������� �������: ";
            cin >> el;
            stack.Push(el);
            break;
        case 2:
            stack.Pop();
            break;
        case 3:
            stack.TopView();
            break;
        case 4:
            stack.GetSize();
            break;
        case 5:
            cout << "���������� �����: " << stack << endl;
        default:
            cout << "������ ������ ���" << endl;
            break;
        }
    }

}
