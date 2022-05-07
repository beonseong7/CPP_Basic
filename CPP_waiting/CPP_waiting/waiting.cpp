#include<iostream>
#include<ctime>

int main() {
	using namespace std;
	cout << "지연 시간을 초단위로 입력하십시오: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; // 지연시간을 시스템 단위 클록 수로 변환
	cout << "카운트를 시작합니다.\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		; // 변환된 클록수만큼 기다리기
	cout << "종료\a\n";
	return 0;
}