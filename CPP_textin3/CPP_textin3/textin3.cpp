#include<iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false) { //EOF 조건을 실행시기 전까지 입력되는 모든문자를 카운팅한다.
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << count << "문자를 읽었습니다.\n";
	return 0;
}