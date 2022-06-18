#include<iostream>

inline double square(double x) { return x * x; } // 인라인 코드 함수를 해당 명령어로 대체한다.

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c;
	cout << ", c의 제곱 = " << square(c++) << endl;//많이쓰지않는 함수에서나 사용할것
	cout << "현재 c = " << c << endl;
	return 0;
}