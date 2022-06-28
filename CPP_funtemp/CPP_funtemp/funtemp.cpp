#include<iostream>
template<class Any>
void Swap(Any& a, Any& b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i,j = " << i << ", " << j << ".\n";
	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
	Swap(i, j);
	cout << "이제 i, j = " << i << ", " << j << ".\n";
	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "컴파일러가 생성한 double형 교환기를 사요하면 \n";
	Swap(x, y);
	cout << "이제 x, y = " << x << ", " << y << ".\n";
	return 0;
}
template<class Any>
void Swap(Any& a, Any& b)//인자의 변수타입에 맞춰서 선언된다.
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
	//참조변수이기때문에 서로 연결되어있음
}