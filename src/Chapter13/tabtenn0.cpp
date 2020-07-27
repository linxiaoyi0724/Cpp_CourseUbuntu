#include <iostream>
#include "tabtenn0.h"
#include <cstring>
using namespace std;
TableTennisPlayer::TableTennisPlayer(const char* fn, const char* ln, bool ht)
{
	strncpy(firstName, fn, LIM - 1);
	firstName[LIM - 1] = '\0';
	strncpy(lastName, ln, LIM - 1);
	lastName[LIM - 1] = '\0';
	hasTable = ht;
}

void TableTennisPlayer::Name()const
{
	cout << lastName << ", " << firstName << endl;
}