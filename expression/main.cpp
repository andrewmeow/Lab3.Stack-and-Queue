#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "..\expressionlib\MyExpression.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    string exprStr;
    cout << "������� ��������� :";
    cin >> exprStr;
    TArithmeticExpression expr(exprStr);
    cout <<"��������� �����:"<< expr.GetInfix() << endl;
    cout << "����������� �����: " << expr.GetPostfix() << endl;
    vector<char> operands = expr.GetOperands();

    cout << expr.Calculate() << endl;
    
}
