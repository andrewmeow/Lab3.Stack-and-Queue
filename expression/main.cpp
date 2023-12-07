#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "..\expressionlib\MyExpression.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    string exprStr;
    cout << "Введите выражение :";
    cin >> exprStr;
    TArithmeticExpression expr(exprStr);
    cout <<"Инфиксная форма:"<< expr.GetInfix() << endl;
    cout << "Постфиксная форма: " << expr.GetPostfix() << endl;
    vector<char> operands = expr.GetOperands();

    cout << expr.Calculate() << endl;
    
}
