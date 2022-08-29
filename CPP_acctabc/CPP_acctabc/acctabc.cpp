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
		cout << "마이너스 입금은 허용되지 않습니다.\n"
		<< "그래서 입금이 취소되었습니다.\n";
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
		cout << "마이너스 인출은 허용되지 않습니다.\n"
		<< "그래서 인출이 취소되었습니다.\n";
	else if (amt <= Balance())
		AcctABC::Withdraw(amt);
	else
		cout << "인출을 요구한 금액 $" << amt
		<< "가 현재 잔액을 초과합니다.\n"
		<< "그래서 인출이 취소되었습니다.\n";
}
void Brass::ViewAcct() const
{
	Formatting f = setFormat();
	cout << "Brass 고객: " << FullName() << endl;
	cout << "계좌번호: " << AccNum() << endl;
	cout << "현재 잔액: $" << Balance() << endl;
	Restore(f);
}