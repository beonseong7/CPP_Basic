#include"worker0.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
Worker::~Worker() {}

void Worker::Set()
{
	cout << "��� �̸��� �Է��Ͻʽÿ�: ";
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show() const
{
	cout << "��� �̸�: " << fullname << "\n";
	cout << "��� ��ȣ: " << id << "\n";
}
void Waiter::Set()
{
	Worker::Set();
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Show() const
{
	cout << "����: ������\n";
	Worker::Show();
	cout << "������ ���: " << panache << "\n";
}
char* Singer::pv[] = { "other", "alto", "contralto","soprano","bass","baritone","tenor" };
