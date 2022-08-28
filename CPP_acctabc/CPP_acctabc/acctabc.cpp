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