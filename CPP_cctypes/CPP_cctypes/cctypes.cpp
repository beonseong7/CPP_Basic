#include<iostream>
#include<cctype>
int main() {
	using namespace std;
	cout << "분석할 텍스트를 입력하십시오:"
		"입력의 끝은 @으로 표시하십시오";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);
	while (ch != '@') // @가 나올때까지 반복
	{
		if (isalpha(ch)) // 알파벳인지 확인
			chars++;
		else if (isspace(ch))// 공백인지 확인
			whitespace++;
		else if (isdigit(ch))//숫자인지 확인
			digits++;
		else if (ispunct(ch))//구두점인지 화긴
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << "알파벳 문자" << chars << ", "
		<< "화이트 스페이스" << whitespace << ", "
		<< "숫자 " << digits << ", "
		<< "구두점" << punct << ", "
		<< "기타" << others << endl;
	return 0;
}