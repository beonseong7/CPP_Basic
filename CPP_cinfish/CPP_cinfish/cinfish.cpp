#include<iostream>
const int Max = 5;
int main()
{
	using namespace std;
	double fish[Max];
	cout << "���� ���� �������� ���Ը� �Է��Ͻʽÿ�.\n";
	cout << "������� �ִ� " << Max << "�������� ���� �� �ֽ��ϴ�.\n"
		<< "<�Է��� �������� q�� �����ʽÿ�.>\n";
	cout << "fish #1:";
	int i = 0;
	while (i<Max && cin >> fish[i]) { //�Է¹����� 5���� ���������� �ݺ�,���ڰ��ƴϸ� ����
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
	double total = 0.0;
	for (int j = 0; j < i; j++) {
		total += fish[j];
	}
	if (i == 0)
		cout << "�����⸦ �Ѹ����� ���� ���ϼ̱���.\n";
	else
		cout << "������" << i << "������ ��� ���Դ� "
		<< total / i << "�׷��Դϴ�.\n";
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}