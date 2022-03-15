#include<iostream>

int main() {
	using namespace std;
	int carrots;

	cout << "당근을 몇 개나 가지고 있니?" << endl;
	cin >> carrots; //정수형 변수 carrots에 데이터 입력
	cout << "여기 두개가 더있다" << endl;
	carrots = carrots + 2;// 변수 carrots에 2만큼 누적
	cout << "이제 당근은 모두 " << carrots << "개이다." << endl;//변수 carrots의 데이터를 표시
	return 0;
}