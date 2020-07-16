#include "./queue.h"
#include <cstdlib>

Queue::Queue(int qs):qsize(qs)
{
    front = rear = NULL;
    items = 0;
}


Queue::~Queue()
{
    Node* temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::IsEmpty()const
{
    return items == 0;
}

bool Queue::IsFull()const
{
    return items == qsize;
}

int Queue::QueueCount()const
{
    return items;
}

bool Queue::EnQueue(const Item& item)
{
    if(IsFull())
    {
        return false;
    }

    Node* add = new Node;
    if(add == NULL)
    {
        return false;
    }
    add->ietm = item;
    add->next = NULL;
    items++;

    if(front == NULL)
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


bool Queue::DeQueue(Item& item)
{
    if(front == NULL)
    {
        return false;
    }

    item = front->ietm;
    Node* temp = front;
    front = front->next;
    delete temp;
    if(items ==0)
    {
        rear = NULL;
    }
    return true;
}


void Customer::set(long when)
{
    processtime = std::rand() % 3 +1;
    arrive = when;
}