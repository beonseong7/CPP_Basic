#include"worker0.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
Worker::~Worker() {}

void Worker::Set()
{
	cout << "사원 이름을 입력하십시오: ";
	getline(cin, fullname);
	cout << "사원 번호를 입력하십시오: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show() const
{
	cout << "사원 이름: " << fullname << "\n";
	cout << "사원 번호: " << id << "\n";
}
void Waiter::Set()
{
	Worker::Set();
	cout << "웨이터 등급을 입력하십시오: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Show() const
{
	cout << "직종: 웨이터\n";
	Worker::Show();
	cout << "웨이터 등급: " << panache << "\n";
}
char* Singer::pv[] = { "other", "alto", "contralto","soprano","bass","baritone","tenor" };
