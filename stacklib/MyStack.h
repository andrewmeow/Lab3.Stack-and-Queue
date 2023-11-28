#ifndef _MY_STACK_
#define _MY_STACK_

#include <iostream>

using namespace std;

template <class T>
class TStack {
protected:
	int size;
	int top;
	T* mas;
public:
	TStack(int n = 1);
	TStack(TStack<T>& stack);
	~TStack();

	void Push(T a);
	T Pop();
	T TopView();

	int GetSize();
	int GetTop();

	bool IsFull();
	bool IsEmpty();

	TStack& operator=(const TStack<T>& stack);

	friend ostream& operator<<(ostream& os, const TStack<T>& stack)
	{
		for (int i = 0; i < stack.top; i++) {
			os << stack.mas[i] << ' ';
		}
		return os;
	}

	friend istream& operator>>(istream& is, const TStack<T>& stack)
	{

		for (int i = 0; i < stack.size; i++) {
			is >> stack.mas[i];
			stack.top++;
		}
		return is;
	}

};



#endif