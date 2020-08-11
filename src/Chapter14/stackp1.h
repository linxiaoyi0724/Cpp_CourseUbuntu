#ifndef STACKP1_H_
#define STACKP1_H_
template<typename T>
class Stackp
{
private:
    enum{SIZE = 10};
    int stacksize;
    T* items;
    int top;

public:
    explicit Stackp(int ss = SIZE);
    Stackp(const Stackp& st);
    ~Stackp(){delete[] items;}
    bool IsEmpty(){return top == 0;}
    bool IsFull(){return top==stacksize;} 
    bool Push(const T& item);
    bool Pop(T& item);
    Stackp& operator=(const Stackp& st);   
};

template<typename T>
Stackp<T>::Stackp(int ss):stacksize(ss),top(0)
{
    items = new T[stacksize];
}

template<typename T>
Stackp<T>::Stackp(const Stackp& st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for(int i= 0;i <top;i++)
    {
        items[i] = st.items[i];
    }
} 

template<typename T>
bool Stackp<T>::Push(const T& item)
{
    if(top < stacksize)
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
bool Stackp<T>::Pop(T& item)
{
    if(top > 0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
    
}

template<typename T>
Stackp<T>& Stackp<T>::operator=(const Stackp<T>& st)
{
    if(this == &st)
    {
        return *this;
    }
    delete[] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for(int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }
    return *this;
}

#endif