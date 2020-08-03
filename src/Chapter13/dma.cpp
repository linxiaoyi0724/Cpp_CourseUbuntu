#include "dma.h"
#include <cstring>

baseDMA::baseDMA(const char* l, int r)
{
	label = new char[strlen(l) + 1];
	std::strncpy(label, l, strlen(l));
	label[strlen(l)] = '\0';
	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}


baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
	{
		return *this;
	}

	delete[] label;
	label = new char[strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
} 


std::ostream& operator<< (std::ostream& os, const baseDMA& rs)
{
	os << "label: " << rs.label << std::endl;
	os << "rating: " << rs.rating << std::endl;
	return os;
}



lacksDMA::lacksDMA(const char* c, const char* l, int r) :baseDMA(l, r)
{
	std::strncpy(color, c, COL_LEN);
	color[COL_LEN] = '\0';
}


