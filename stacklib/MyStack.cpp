#include "MyStack.h"

template <class T>
TStack<T>::TStack(int n) {
	if (n < 1)
		throw "Wrong size";
	size = n;
	top = 0;
	mas = new T[size];
}

template <class T>
TStack<T>::TStack(TStack<T>& stack) {
	size = stack.size;
	top = stack.top;
	mas = new T[size];
	copy(stack.mas, stack.mas + stack.size, mas);
}

template <class T>
TStack<T>::~TStack() {
	delete[] mas;
}

template <class T>
void TStack<T>::Push(T a) {
	if (IsFull()) {
		throw "Stack overflow";
	}
	mas[top] = a;
	top++;
}

template<class T>
T TStack<T>::Pop()
{
	if (IsEmpty())
		throw "Stack is empty";
	return mas[top--];
}

template <class T>
T TStack<T>::TopView() {
	if (IsEmpty()) {
		throw "Stack is empty";
	}
	return mas[top];
}


template <class T>
int TStack<T>::GetSize() {
	return size;
}

template <class T>
int TStack<T>::GetTop() {
	return top - 1;
}

template <class T>
bool TStack<T>::IsFull() {
	return top == size;
}

template <class T>
bool TStack<T>::IsEmpty() {
	return top == 0;
}

template <class T>
TStack<T>& TStack<T>::operator=(const TStack<T>& stack) {
	if (this == &stack) {
		return *this;
	}
	delete[] mas;
	size = stack.size;
	top = stack.top;
	mas = new T[size];
	copy(stack.mas, stack.mas + stack.size, mas);
	return *this;
}
