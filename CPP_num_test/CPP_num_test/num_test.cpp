#include<iostream>
int main() {
	using namespace std;
	cout << "카운트 시작값을 입력하십시오: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--) // i= 의 값을 limit으로 초기화하고 i가 0(false)일때까지 i를 --한다
		cout << "i = " << i << "\n";
	cout << "i = " << i << " 이므로 루프를 종료합니다.\n";
	return 0;
}