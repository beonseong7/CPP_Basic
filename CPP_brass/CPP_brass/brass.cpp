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
		cout << "마이너스 입금은 혀용되지 않습니다.\n"
		<< "그래서 입금이 취소되었습니다.\n";
	else
		balance += amt;
}
void Brass::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
		cout << "마이너스 인출은 혀용되지 않습니다.\n"
		<< "그래서 인출이 취소되었습니다.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "인출을 요구한 금액 $" << amt
		<< "가 현재 잔액을 초과합니다.\n"
		<< "그래서 인출이 취소되었습니다.\n";
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
	cout << "고객 이름: " << fullName << endl;
	cout << "계좌 번호: " << acctNum << endl;
	cout << "현재 잔액: $" << balance << endl;
	restore(initialState, prec);
}