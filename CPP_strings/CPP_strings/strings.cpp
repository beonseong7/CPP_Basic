#include<iostream>

int main() {
	using namespace std;
	const int Size = 15;
	char name1[Size];//Size 크기의 문자열 선언
	char name2[Size] = "C++owboy";//데이터 내부 C++owboy\0으로 저장됨
	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 실례지만 성함이?\n";
	cin >> name1;
	cout << "아, " << name1 << " 씨! 당신의 이름은 ";//name1의 내용 출력
	cout << strlen(name1) << "자 입니다만 \n";//저장된 문자열의 크기를 출력함.
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";//문자열 데이터 크기를 출력함.
	cout << "이름이 " << name1[0] << "자로 시작하는군요. \n";//문자열 첫번째 데이터를 출력함.
	name2[3] = '\0';//name의 4번째 데이터를 \0으로 저장
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;// 데이터 내용중\0 까지 출력
	return 0;
}