#include<iostream>
int main() {
	using namespace std;
	double* p3 = new double[3]; // double형 포인터 배열 선언

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]은 " << p3[1] << "입니다.\n";
	p3 = p3 + 1; // 각 포인터 배열에있는 주소를 1씩 앞당긴다.
	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
	cout << "p3[1]이 " << p3[0] << "입니다.\n";
	p3 = p3 - 1; // 각 포인터 배열이엤는 주소를 1씩 미룬다.
	delete[] p3; // 배열 포인터 해제
	return 0;
}