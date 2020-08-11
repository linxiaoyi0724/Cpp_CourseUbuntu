#ifndef STACKTP_H_
#define STACKTP_H_

template<class T>
class Stack
{
private:
	enum{MAX= 10};
	T items[MAX];
	int top;

public:
	Stack();
	bool IsFull();
	bool IsEmpty();
	bool Push(const T& item);
	bool Pop(T& item);
};

template<typename T>
Stack<T>::Stack()
{
	top = 0;
}

template<typename T>
bool Stack<T>::IsFull()
{
	return top == MAX;
}

template<typename T>
bool Stack<T>::IsEmpty()
{
	return top == 0;
}


template<typename T>
bool Stack<T>::Push(const T& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
bool Stack<T>::Pop(T& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
	{
		return false;
	}
}
#endif // ! STACKTP_H_
