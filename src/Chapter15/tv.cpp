#include "./tv.h"
#include <iostream>

bool Tv::VolUp()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Tv::VolDown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
	{
		return false;
	}
}

void Tv::ChanUp()
{
	if (channel < maxChannel)
	{
		channel++;
	}
	else
	{
		channel = 1;
	}
}

void Tv::ChanDown()
{
	if (channel > 1)
	{
		channel--;
	}
	else
	{
		channel = maxChannel;
	}
}

void Tv::setting()const
{
	using std::cout;
	using std::endl;
	cout << "Tv is " << (state == Off ? "off" : "on") << endl;
	if (state == On)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "VCR") << endl;
	}
}