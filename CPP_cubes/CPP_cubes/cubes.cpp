#include<iostream>
double cube(double a);
double refcube(double& ra);
int main()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);//�Ű������� �������� �����ϱ⶧���� ���� x���� ������ ���� �ʴ´�.
	cout << " = " << x << "�� ������ \n";
	cout << refcube(x);//�ּҸ� �����ϴ� ���������� �Ű������̱⶧���� x ������ ������ ����.
	cout << " = " << x << "�� ������\n";
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double& ra)
{
	ra *= ra * ra;
	return ra;
}