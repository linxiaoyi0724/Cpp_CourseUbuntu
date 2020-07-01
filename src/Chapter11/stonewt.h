#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
    enum{Lbs_per_stone = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt();
    ~Stonewt();
    Stonewt(double lbs);
    Stonewt(int stone, double lsb)
    void show_lbs()const;
    void show_pounds()const;
};
#endif