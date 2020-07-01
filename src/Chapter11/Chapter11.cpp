1.　Stonewt operator* (const double m)const;
    Stonewt Stonewt::operator*(const double m)const
    {
        Stonewt st;
        st.stone = this->stone *m + this->pd_left * 2 / per_stone;
        st.pd_left = this->pd_left * 2 % per_stone;
        return st;
    }


2. 成员函数是类定义的一部分，通过特定的对象调用。成员函数可以隐式访问调用对象的成员，而无须成员操作符。
    友元函数不是类的组成部分，因此被称为直接函数调用。友元函数不能隐式访问类成员，必须使用成员操作符。

３．访问私有成员，必须是友元函数，要访问公有成员，可以不是友元。

４．friend Stonewt operator*(double m, Stonewt s)
    Stonewt operator*(double m, Stonewt s)
    {
        Stonewt st;
        st.stone = m * s.stone;
        return st;
    }

5.sizeof, * , :: , ?:

6.
    operator double()const;

    operator double()const
    {

    }
