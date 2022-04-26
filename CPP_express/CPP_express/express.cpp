#include<iostream>
int main() {
	using namespace std;
	int x;

	cout << "대입 표현식 x= 100의 값은 ";
	cout << (x = 100) << endl; //x에 100 저장
	cout << "현재 x의 값은 " << x << endl;
	cout << "관계 표현식 x < 3 의 정수값은";
	cout << (x < 3) << endl;
	cout << "관계 표현식 x > 3의 정수값은";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha); // 기본적으로 bool값을 int형으로 변환하는 C++기능을 억제
	cout << "관계 표현식 x < 3의 bool값은";
	cout << (x < 3) << endl; // false 는 0을 의미
	cout << "관계 표현식 x > 3의 bool값은";
	cout << (x > 3) << endl; // true 는 1을 의미
	return 0;
}