#include<iostream>
#include<string>
int main() {
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) { //word 값이 mate가 아니면 계속 반복
		cout << word << endl;
		word[0]=ch;
	}
	cout << "루프가 끝난 후에 단어는 " << word << "입니다.\n";
	return 0;
}