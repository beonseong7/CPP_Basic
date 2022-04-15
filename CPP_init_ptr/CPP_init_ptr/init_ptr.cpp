#include<iostream>
int main() {
	using namespace std;
	int higgens = 5;
	int* pt = &higgens; // 선언과 동시에 &higgens값으로 초기화 된다.
	cout << "higgens의 값 = " << higgens
		<< ", higgensd의 주소 = " << &higgens << endl;
	cout << "*pt의 값 = " << *pt
		<< ", pt의 값 = " << pt << endl;

	return 0;
}