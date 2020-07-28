#include <iostream>
#include <cstring>
#include "tabtenn1.h"

TabTennisPlayer::TabTennisPlayer(const char* fn, const char* ln, bool ht)
{
	std::strncpy(firstName, fn, LIM - 1);
	firstName[LIM-1] = '\0';
	std::strncpy(lastName, ln, LIM - 1);
	lastName[LIM - 1] = '\0';
	hasTable = ht;
}

void TabTennisPlayer::Name()const
{
	std::cout << lastName << "," << firstName << std::endl;
}


RatedPlayer::RatedPlayer(unsigned int r, const char* fn, const char* ln, bool ht) :TabTennisPlayer(fn, ln, ht), rating(r)
{

}

RatedPlayer::RatedPlayer(unsigned int r, const TabTennisPlayer& tp) : TabTennisPlayer(tp), rating(r)
{

}