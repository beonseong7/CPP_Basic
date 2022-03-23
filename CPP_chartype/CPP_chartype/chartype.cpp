#include <iostream>

int main() {
	using namespace std;
	char ch; //문자하나만 입력받는 char형 선언

	cout << "원하는 문자 하나를 입력하시오 : " << endl;
	cin >> ch;// 입력된 문자하나를 char형 변수에 저장 (문자열 입력시 첫단어만 저장된다)
	cout << "감사합니다 ";
	cout << "당신이 입력한 문자는 " << ch << "입니다." << endl; //ch변수 출력
	return 0;
}