#ifndef TVFM_H_
#define TVFM_H_
class Tv;
class Remote
{
public:
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum 
	{
		Antenna,Cable
	};
	enum{TV,VCR};
private:
	int mode;
public:
	Remote(int m = TV) : mode(m){}
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void onoff(Tv& t);
	void chanup(Tv& t);
	void chandown(Tv& t);
	void set_mode(Tv& t);
	void set_input(Tv& t);
	void set_chan(Tv& t, int c);

};
class Tv
{
public:
private:
};
#endif