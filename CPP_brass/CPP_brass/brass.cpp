#include<iostream>
#include"brass.h"
using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string & s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}
void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������� �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else
		balance += amt;
}
void Brass::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
		cout << "���̳ʽ� ������ ������� �ʽ��ϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "������ �䱸�� �ݾ� $" << amt
		<< "�� ���� �ܾ��� �ʰ��մϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.\n";
	restore(initialState, prec);
}
double Brass::Balance() const
{
	return balance;
}
void Brass::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "�� �̸�: " << fullName << endl;
	cout << "���� ��ȣ: " << acctNum << endl;
	cout << "���� �ܾ�: $" << balance << endl;
	restore(initialState, prec);
}