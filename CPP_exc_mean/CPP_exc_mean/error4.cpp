#include<iostream>
#include<cmath>
#include"exc_mean.h"

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_geman);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ�����"
				<< z << "�Դϴ�.\n";
			cout << x << ", " << y << "�� ���������"
				<< gmean(x, y) << "�Դϴ�.\n";
			cout << "�ٸ� �μ��� �Է��Ͻʽÿ�(�������� q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "�ٽ� �Ͻʽÿ�.\n";
			continue;
		}
	}
}