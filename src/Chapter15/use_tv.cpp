#include <iostream>
#include "tv.h"

int main()
{
	using std::cout;
	using std::endl;
	Tv s27;
	cout << "Initial settings for 27\" Tv: " << endl;
	s27.setting();
	s27.OnOff();
	s27.ChanUp();
	cout << endl << "Adjuested settings for 27\" Tv: " << endl;
	s27.setting();

	Remote grey;
	grey.Set_chan(s27, 10);
	grey.VolUp(s27);
	grey.VolDown(s27);
	cout << endl << "27\" setting after using remote: " << endl;
	s27.setting();

	Tv s32(Tv::On);
	s32.Set_mode();
	grey.Set_chan(s32, 28);
	cout << endl << "\" settings: " << endl;
	s32.setting();
	return 0;
}