#include<iostream>
#include<string>
// ���� ������ Ÿ���� ����� ������� �⺻�������� �Է¹޴� �ڵ��.
int main() {
	using namespace std;
	char name[20];
	string address;
	int age;
	float grade;
	double last_grade;
	cout << "����� �̸���?";
	cin.getline(name, strlen(name));
	cout << "�ּ�����?";
	getline(cin, address);
	cout << "����� ���̴�?";
	cin >> age;
	cout << "����� ��� ������?";
	cin >> grade;
	cout << "����� ���� �б� ������?";
	cin >> last_grade;

	cout << "�Էµ� ����� �����Դϴ�" << endl;
	cout << "�̸�:" << name << "   ����:" << age << endl;
	cout << "�ּ���:" << address << endl;
	cout << "��� ����:" << grade << "���� �б� ����:" << last_grade << endl;

	return 0;
}