#ifndef ARRAYTP_H_
#define ARRAYTP_H_
#include <iostream>
#include <cstdlib>

template<typename T, int n>
class ArrayTp
{
private:
	T ar[n];
public:
	ArrayTp(){}
	explicit ArrayTp(const T& v);
	virtual T& operator[](int i);
	virtual T operator[](int i)const;
};

template<typename T, int n>
ArrayTp<T, n>::ArrayTp(const T& v)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}

template<typename T, int n>
T& ArrayTp<T, n>::operator[](int i)
{
	if (i < 0 || i > n)
	{
		std::cout << "Error" << std::endl;
	}
	return ar[i];
}

template<typename T, int n>
T ArrayTp<T, n>::operator[](int i)const
{
	if (i < 0 || i > n)
	{
		std::cout << "Error" << std::endl;
	}
	return ar[i];
}

#endif // !ARRAYTP_H_

