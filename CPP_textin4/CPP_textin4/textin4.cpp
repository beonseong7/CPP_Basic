#include<iostream>
int main() {
	using namespace std;
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF) {//false가아닌 EOF를 그대로 사용해 ctrl+ z를 확인할수있다.
		cout.put(char(ch));
		++count;
	}
	cout << count << "문자를 읽었습니다.\n";
	return 0;
}