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
}