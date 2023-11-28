#include "MyQueue.h"

template <class T>
TQueue<T>::TQueue(int n) {
	if (n < 1)
		throw "Wrong size";
	size = n;
	start = end = count = 0;
	mas = new T[n];
}

template <class T>
TQueue<T>::TQueue(const TQueue <T>& q) {
	size = q.size;
	start = q.start;
	end = q.end;
	count = q.count;
	mas = new T[n];
	copy(q.mas, q.mas + q.size, mas);
}

template <class T>
TQueue<T>::~TQueue()
{
	delete[]mas;
}

template <class T>
void TQueue<T>::Push(T a)
{
	if (IsFull())
		throw "Queue is full";
	mas[end] = a;
	end = (end + 1) % size;
}

template <class T>
T TQueue<T>::Get() {
	if (IsEmpty()) {
		throw "Queue is empty";
	}

	T result = mas[start];
	start = (start + 1) % size;
	count--;

	return result;
}

template <class T>
int TQueue<T>::GetCount()
{
	return count;
}

template <class T>
bool TQueue<T>::IsFull() {
	return count == size;
}

template <class T>
bool TQueue<T>::IsEmpty() {
	return count == 0;
}

template <class T>
ostream& operator<<(ostream& os, const TQueue<T>& queue) {
	for (int i = 0; i < queue.count; i++) {
		os << queue.mas[(queue.start + i) % queue.size] << ' ';
	}
	return os;
}

template <class T>
istream& operator>>(istream& is, TQueue<T>& queue) {
	for (int i = 0; i < queue.size; i++) {
		is >> queue.mas[i];
		queue.count++;
	}
	return is;
}