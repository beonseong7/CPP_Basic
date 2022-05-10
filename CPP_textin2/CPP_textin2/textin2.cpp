#include<iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;

	cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오:\n";
	cin.get(ch);
	while (ch != '#') { // cin >> ch 방식과는 달리 공백까지 포함해서 문자수를 카운팅한다.
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "문자를읽었습니다.\n";
	return 0;
}