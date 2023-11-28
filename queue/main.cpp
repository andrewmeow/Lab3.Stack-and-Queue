#include <iostream>
#include "MyQueue.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0, el, size;

    cout << "*�������� �������*\n������� ������: ";
    cin >> size;
    TQueue<int> Queue(size);
    while (num != 5)
    {
        cout << "\n1. �������� ������� � �������\n";
        cout << "2. ������� ������� �� �������\n";
        cout << "3. ������ �������\n";
        cout << "4. ������� ���������� �������\n";
        cout << "5. �����\n";
        cout << "����: ";
        cin >> num;
        cout << endl;
        switch (num)
        {
        case 1:
            cout << "������� �������: ";
            cin >> el;
            Queue.Push(el);
            break;
        case 2:
            Queue.Get();
            break;
        case 3:
            Queue.GetCount();
            break;
        case 4:
            cout << "���������� �������: " << Queue << endl;
            break;
        default:
            cout << "������ ������ ���" << endl;
            break;
        }
    }
}
