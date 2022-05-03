#include<iostream>
#include<cstring>
int main() {
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++) { //ch를 a부터 가산 연산을통해 아스키코드로 한단어씩 올린다. 그러다가 word값이 mate면 for문을 종료한다.
		cout << word << endl;
		word[0] = ch;
	}
	cout << "루프가 끝난 후에 단어는 " << word << "입니다.\n";
	return 0;
}