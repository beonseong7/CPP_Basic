#include<iostream>
void cheers(int);
double cube(double x);
int main(void) {
	using namespace std;
	cheers(5);
	cout << "하나의 수를 입력하십시오: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "한변의 길이가" << side << "센티미터인 정육면체의 부피는";
	cout << volume << " 세제곱센터미터입니다.\n";
	cheers(cube(2)); //cube 함수에 2를 넣은 후의 리턴값을 cheers함수의 인자로 사용한다.
	return 0;
}
void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}