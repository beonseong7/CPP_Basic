#include<iostream>
double cube(double a);
double refcube(double& ra);
int main()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);//매개변수로 변수값만 전달하기때문에 기존 x값엔 영향이 가지 않는다.
	cout << " = " << x << "의 세제곱 \n";
	cout << refcube(x);//주소를 같게하는 참조변수가 매개변수이기때문에 x 값에도 영향이 간다.
	cout << " = " << x << "의 세제곱\n";
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