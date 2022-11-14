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
	virtual void Speak() const { cout << "���� Grand Ŭ�����̴�!\n"; }
	virtual int Value() const { return hold; }
};
class Superb : public Grand
{
public:
	Superb(int h = 0) :Grand(h) {}
	void Speak() const { cout << "���� Superb Ŭ�����̴�!!\n"; }
	virtual void Say() const
	{
		cout << "���� ������ �ִ� Superb ����" << Value() << "�̴�\n";
	}
};
class Magnificent : public Superb
{
private:
	char ch;
public:
	Magnificent(int h = 0, char cv = 'A') : Superb(h), ch(cv) {}
	void Speak() const { cout << "���� Magnificent Ŭ�����̴�!!!\n"; }
	void Say() const { const << "���� ������ �ִ� ���ڴ�" << ch << "�̰�, ������ " << Value() << "�̴�.\n"; }
};