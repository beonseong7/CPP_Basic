#include<iostream>
#include<cstdlib>
#include<ctime>
#include<typeinfo>
using namespace std;

class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) : hold(h) {}
	virtual void Speak() const { cout << "나는 Grand 클래스이다!\n"; }
	virtual int Value() const { return hold; }
};
class Superb : public Grand
{
public:
	Superb(int h = 0) :Grand(h) {}
	void Speak() const { cout << "나는 Superb 클래스이다!!\n"; }
	virtual void Say() const
	{
		cout << "내가 가지고 있는 Superb 값은" << Value() << "이다\n";
	}
};
class Magnificent : public Superb
{
private:
	char ch;
public:
	Magnificent(int h = 0, char cv = 'A') : Superb(h), ch(cv) {}
	void Speak() const { cout << "나는 Magnificent 클래스이다!!!\n"; }
	void Say() const { const << "내가 가지고 있는 문자는" << ch << "이고, 정수는 " << Value() << "이다.\n"; }
};