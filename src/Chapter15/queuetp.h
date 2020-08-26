#ifndef QUEUETP_H_
#define QUEUETP_H_

template<typename T>
class QueueTp
{
private:
	enum { Q_SIZE = 10 };
	class Node
	{
	public:
		T item;
		Node* next;
		Node(const T& i):item(i),next(0){}
	};

	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp& q):qsize(0){}
	//QueueTp& operator=(const QueueTp& q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool IsEmpty()const { return items == 0; }
	bool IsFull()const { return items == qsize; }
	int QueueCount()const { return items; }
	bool EnQueue(const T &item);
	bool DeQueue(T &item);
};


template <typename T>
QueueTp<T>::QueueTp(int qs):qsize(qs)
{
	front = rear = 0;
	items = 0;
}

template <typename T>
QueueTp<T>::~QueueTp()
{
	Node* temp;
	while (front != 0)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<typename T>
bool QueueTp<T>::EnQueue(const T &item)
{
	if (IsFull())
	{
		return false;
	}

	Node *add = new Node(item);
	if (add == NULL)
	{
		return false;
	}

	items++;
	if (front == 0)
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}

	rear = add;
	return true;
}

template <typename T>
bool QueueTp<T>::DeQueue(T &item)
{
	if (front == 0)
		return false;
	item = front->item;
	items--;

	Node* temp = front;
	front = front->next;
	delete temp;

	if (items == 0)
		rear = 0;
	return true;
}

#endif
