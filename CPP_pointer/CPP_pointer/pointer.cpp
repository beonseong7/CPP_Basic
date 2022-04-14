#include<iostream>
int main() {
	using namespace std;
	int updates = 6;
	int* p_updates; // 정수형 포인터 변수 선언
	p_updates = &updates; // 포인터 변수의 주소값을 updates로 맞춘다.

	cout << "값: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl; // 해당 포인터 주소에있는 값을 출력
	cout << "주소 : &updates = " << &updates; // 해당 포인터 주소를 출력
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1; // 포인터 변수로도 연산이 가능하다.
	cout << "변경된 updates = " << updates << endl;
	return 0;
}