//#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum 
	{
		per_stone = 14
	};
	int stone;
	double pd_left;
	double pound;

public:
	Stonewt();
	Stonewt(double pd);
	Stonewt(int st, double lbs);
	~Stonewt();
	void show_lbs()const;
	void show_stn()const;

	operator int()const;
	operator double()const;
};



#endif // !STONEWT_H_
