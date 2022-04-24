#include<iostream>
int main() {
	using namespace std;
	int i;
	for (i = 0; i < 5; i++) //for (초기화:처음 실행됨;조건문:조건문이 참일때만 루프가 실행됨;갱신:루프 주기 끝에서 실행됨)
		cout << "C++가 루프를 사용합니다.\n";
	cout << "루프를 언제끝내야하는지 C++는 알고 있습니다." << endl;
	return 0;
}