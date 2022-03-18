#include<iostream>
int stonetolb(int);//정수형 함수 stonetolb 정의
int main() {
	using namespace std;
	int stone;
	cout << "체중을 스톤단위로 입력하시오: ";
	cin >> stone;
	int pounds = stonetolb(stone);//stonetolb 함수 리턴값을 pounds 변수에 저장
	cout << stone << " 스톤은 ";
	cout << pounds << " 파운드입니다." << endl;
	return 0;
}
int stonetolb(int sts) {
	return 14 * sts;//정수형 함수이기에 반드시 return이 존재해야한다.
}