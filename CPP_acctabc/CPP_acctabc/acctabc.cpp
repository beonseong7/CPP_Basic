#include<iostream>
#include"acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

AcctABC::AcctABC(const string& s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}
void AcctABC::Deposit(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� �Ա��� ������ �ʽ��ϴ�.\n"
		<< "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
	else
		balance += amt;
}
void AcctABC::Withdraw(double amt)
{
	balance -= amt;
}
AcctABC::Formatting AcctABC::setFormat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}
void AcctABC::Restore(Formatting& f) const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}
void Brass::Withdraw(double amt)
{
	if (amt < 0)
		cout << "���̳ʽ� ������ ������ �ʽ��ϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.\n";
	else if (amt <= Balance())
		AcctABC::Withdraw(amt);
	else
		cout << "������ �䱸�� �ݾ� $" << amt
		<< "�� ���� �ܾ��� �ʰ��մϴ�.\n"
		<< "�׷��� ������ ��ҵǾ����ϴ�.\n";
}
void Brass::ViewAcct() const
{
	Formatting f = setFormat();
	cout << "Brass ��: " << FullName() << endl;
	cout << "���¹�ȣ: " << AccNum() << endl;
	cout << "���� �ܾ�: $" << Balance() << endl;
	Restore(f);
}