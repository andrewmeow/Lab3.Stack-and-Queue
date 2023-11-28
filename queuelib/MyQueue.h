#ifndef _MY_QUEUE_
#define _MY_QUEUE_
#include <iostream>
using namespace std;

template <class T>
class TQueue {
protected:
	int size;
	int start;
	int end;
	int count;
	T* mas;

public:
	TQueue(int n = 1);
	TQueue(const TQueue <T>& q);
	~TQueue();

	void Push(T a);
	T Get();
	int GetCount();

	bool IsFull();
	bool IsEmpty();

	friend ostream& operator<<(ostream& os, const TQueue<T>& queue);
	friend istream& operator>>(istream& is, const TQueue<T>& queue);

};

#endif