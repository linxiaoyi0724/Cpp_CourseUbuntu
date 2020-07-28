#ifndef TABTENN1_H_
#define TABTENN1_H_

class TabTennisPlayer
{
private:
	enum
	{
		LIM = 20
	};

	char firstName[LIM];
	char lastName[LIM];
	bool hasTable;

public:
	TabTennisPlayer(const char* fn = "none", const char* ln = "none", bool ht = false);
	void Name()const;
	bool HasTable()const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
};


class RatedPlayer : public TabTennisPlayer
{
private:
	unsigned int rating;

public:
	RatedPlayer(unsigned int r = 0, const char* fn = "none", const char* ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TabTennisPlayer& tp);
	unsigned int Rating() { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};

#endif // ! TABTENN1_H_
