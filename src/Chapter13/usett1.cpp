#include <iostream>
#include "tabtenn1.h"
using namespace std;

int main()
{
	TabTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rPlayer1(1140, "Mallory", "Duck", true);


	rPlayer1.Name();
	if (rPlayer1.HasTable())
	{
		cout << ": has a table " << endl;
	}
	else
	{
		cout << ": hasn't a table " << endl;
	}


	player1.Name();
	if (player1.HasTable())
	{
		cout << ": has a table " << endl;
	}
	else
	{
		cout << ": hasn't a table " << endl;
 	}

	cout << "Name: ";
	rPlayer1.Name();
	cout << "; Rating: " << rPlayer1.Rating() << endl;

	RatedPlayer rPlayer2(1212, player1);
	cout << "Name: ";
	rPlayer2.Name();
	cout << "; Rating: " << rPlayer2.Rating() << endl;

	return  0;
}