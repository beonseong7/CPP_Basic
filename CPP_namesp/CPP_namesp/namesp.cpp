#include<iostream>
#include "namesp.h"

namespace pers
{
	using std::cout;
	using std::cin;
	void getPerson(Person& rp)
	{
		cout << "input name:";
		cin >> rp.fname;
		cout << "input firstname: ";
		cin >> rp.lname;
	}
	void showPerson(const Person& rp)
	{
		std::cout << rp.lname << ", " << rp.fname;
	}
}