#ifndef TV_H_
#define TV_H_
class Tv
{
public:
	friend class Remote;
	enum{Off, On};
	enum{MaxVal, MinVal};
	enum{ Antenna, Cable };
	enum{TV, VCR};

	Tv(int s= Off, int mc = 100):state(s),volume(5),maxChannel(mc),channel(2),mode(Cable), input(TV){}
	void OnOff() { state = (state == On) ? Off : On; }
	bool IsOn()const { return state == On; }
	bool VolUp();
	bool VolDown();
	void ChanUp();
	void ChanDown();
	void Set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void Set_inpt() { input = (input == TV) ? VCR : TV; }
	void setting()const;

private:
	int state;
	int volume;
	int maxChannel;
	int channel;
	int mode;
	int input;
};


class Remote
{
private:
	int mode;
public:
	Remote(int m = Tv::TV) :mode(m) {}
	bool VolUp(Tv& t) { return t.VolUp(); }
	bool VolDown(Tv& t) { return t.VolDown(); }
	void OnOff(Tv& t) { t.OnOff(); }
	void ChanUp(Tv& t) { t.ChanUp(); }
	void ChanDown(Tv& t) { t.ChanDown(); }
	void Set_chan(Tv& t, int c) { t.channel = c; }
	void Set_mode(Tv& t) { t.Set_mode(); }
	void Set_input(Tv& t) { t.Set_inpt(); }
};
#endif // ! TV_H_

