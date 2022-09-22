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
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Set()
{
	cout << "�������� �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
}
void Waiter::Show() const
{
	cout << "����: ������\n";
	Worker::Data();
	Data();
}
void Waiter::Data() const
{
	cout << "������ ���: " << panache << endl;
}
void Waiter::Get()
{
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
char* Singer::pv[Singer::Vtypes] = { "other","alto","contralto","soprano","bass","baritone","tenor" };