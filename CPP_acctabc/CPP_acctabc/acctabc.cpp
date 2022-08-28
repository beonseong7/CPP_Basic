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