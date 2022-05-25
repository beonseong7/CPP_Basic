#include<iostream>
const int ArSize = 80;
int main() {
	using namespace std;
	char line[ArSize];
	int spaces = 0;
	cout << "한 행의 텍스트를 입력하십시오:\n";
	cin.get(line, ArSize);
	cout << "전체 텍스트:\n" << line << endl;
	cout << "첫 마침표까지의 텍스트:\n ";
	for (int i = 0; line[i] != '\0'; i++)//개행문자가 나올때까지 진행
	{
		cout << line[i];
		if (line[i] == '.') //마침표가나오면 바로종료
			break;
		if (line[i] != ' ')//공백문자가 아니면 밑 명령 스킵
			continue;
		spaces++;
	}
	cout << "\n빈칸 문자는" << spaces << "개입니다.\n";
	cout << "종료.\n";
	return 0;

}