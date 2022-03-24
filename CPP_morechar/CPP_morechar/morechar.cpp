#include<iostream>
int main() {
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;

	cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
	ch = ch + 1;//아스키코드표 기준으로 다음 코드로 변한다.
	i = ch;//해당 문자의 아스키코드를 정수형 변수에 저장한다.
	cout << ch << "의 ASCII 코드는" << i << "입니다." << endl; //
	cout << "cout.put (ch)를 사용하여 char형 변수 ch를 화면에 출력:";
	cout.put(ch);// cout.put()함수는 문자를 출력할때 사용된다
	cout.put('2');//문자 '2'를 출력한다.
	cout << endl << "종료" << endl;
	return 0;
}