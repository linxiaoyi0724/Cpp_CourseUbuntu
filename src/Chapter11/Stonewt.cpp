#include "Stonewt.h"

Stonewt::Stonewt()
{
	stone = pd_left = pound = 0.0;
	std::cout << "The class Stonewt is created!" << std::endl;
}

Stonewt::Stonewt(double pd)
{
	stone = (int)pd / per_stone;
	pd_left = (int)pd % per_stone + pd - (int)pd;
	pound = pd;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pd_left = lbs;
	pound = stn * per_stone + lbs;
}

Stonewt::~Stonewt()
{
	std::cout << "The class is destory!" << std::endl;
}


void Stonewt::show_stn()const
{
	std::cout << stone << " stone, " << pd_left << " pounds. " << std::endl;
}

void Stonewt::show_lbs()const
{
	std::cout << pound << " pounds." << std::endl;
}


Stonewt::operator int()const
{
	return int(pound + 0.5);
}

Stonewt::operator double()const
{
	return double(pound);
}