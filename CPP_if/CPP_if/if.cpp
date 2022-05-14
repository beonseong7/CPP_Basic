#include<iostream>
int main() {
	using std::cin;
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') { // ch에서 받는 값이 .일때까지 반복한다.
		if (ch == ' ') // ch에서 받는 값이 공백값이면 spaces를 1씩 가산한다.
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "이 문장의 총문자 수는 " << total << "이고, ";
	cout << "그 중에서 빈칸은" << spaces << "개입니다.\n";
	return 0;
}