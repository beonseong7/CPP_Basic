#include<iostream>
double gildong(int);
double moonsoo(int);
void estimate(int lines, double(*pf)(int));//double형 포인터 함수선언
int main()
{
	using namespace std;
	int code;
	cout << "필요한 코드의 행 수를 입력하십시오:";
	cin >> code;
	cout << "홍길동의 시간 예상:\n";
	estimate(code, gildong);
	cout << "박문수의 시간 예상:\n";
	estimate(code, moonsoo);
	return 0;
}
double gildong(int lns)
{
	return 0.05 * lns;
}
double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double (*pf)(int))//int형을 인자로받는 double형 인자를 선언한다.
{
	using namespace std;
	cout << lines << "행을 작성하는 데 ";
	cout << (*pf)(lines) << "시간이 걸립니다.\n";
}