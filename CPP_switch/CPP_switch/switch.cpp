#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main() {
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5) { // choice ���� 5�� ������ �ݺ�
		switch (choice) // choice ���� case ���� ���ϰ�� �ش� ������ ����, 
		{
		case 1 : cout << "\a\a";
			break;//switch�� Ż��
		case 2: report();
			break;//switch�� Ż��
		case 3: cout << "������� ���� ȸ�翡 ��̽��ϴ�.\n";
			break;//switch�� Ż��
		case 4: comfort();
			break;//switch�� Ż��
		default: cout << "�װ��� ������ �� �����ϴ�.\n"; // ������� ���� �Էµ������ ����
		}
		showmenu();
		cin >> choice;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
void showmenu() {
	cout << "1,2,3,4,5�� �߿��� �ϳ��� �����Ͻʽÿ�:\n"
		"1) �����				2) ������ \n"
		"3) �˸�����           4) �����\n"
		"5) ����\n";
}
void report()
{
	cout << "�̹� �б�� �濵 ������ ���� �����ϴ�.\n"
		"�Ǹŷ��� 120% �þ��, ����� 35% �پ����ϴ�.\n";
}
void comfort() {
	cout << "������� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�.\n"
		"�̻�ȸ�� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�.\n";
}