#include "workermi.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}
void Worker::Data() const
{
	cout << "사원 이름: " << fullname << endl;
	cout << "사원 번호: " << id << endl;
}
void Worker::Get()
{
	getline(cin, fullname);
	cout << "사원 번호를 입력하십시오: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Set()
{
	cout << "웨이터의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}
void Waiter::Show() const
{
	cout << "직종: 웨이터\n";
	Worker::Data();
	Data();
}
void Waiter::Data() const
{
	cout << "웨이터 등급: " << panache << endl;
}
void Waiter::Get()
{
	cout << "웨이터 등급을 입력하십시오: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
char* Singer::pv[Singer::Vtypes] = { "other","alto","contralto","soprano","bass","baritone","tenor" };