#include "workermi.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}
void Worker::Data() const
{
	cout << "��� �̸�: " << fullname << endl;
	cout << "��� ��ȣ: " << id << endl;
}
void Worker::Get()
{
	getline(cin, fullname);
}