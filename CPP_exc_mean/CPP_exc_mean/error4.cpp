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
	cout << "두 수를 입력하십시오: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화평균은"
				<< z << "입니다.\n";
			cout << x << ", " << y << "의 기하평균은"
				<< gmean(x, y) << "입니다.\n";
			cout << "다른 두수를 입력하십시오(끝내려면 q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "다시 하십시오.\n";
			continue;
		}
	}
}