#include<iostream>
#include<string>

int main() {
	using namespace std;
	cout << "단어를 하나 입력하십시오: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j) // word값을 끝값부터 하나씩 temp에 넣어서  word앞부터 순서대로값에 넣는다. 단어를 서로 교차한다고 생각하면된다.
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n종료.\n";
	return 0;
}