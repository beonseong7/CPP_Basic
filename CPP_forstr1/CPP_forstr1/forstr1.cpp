#include<iostream>
#include<string>
int main() {
	using namespace std;
	cout << "단어 하나를 입력하십시오: ";
	string word;
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--) //i를 word의 크기만큼 초기화하고 1씩 감소하면서 word의 뒤 알파벳부터 순서대로 출력한다.
		cout << word[i];
	cout << "\n종료.\n";
	return 0;
}