#include<iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
	using namespace std;
	const char mmm[15] = "minimum";
	const char * wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << mmm << "에는 m이 "<< ms << "개 들어 있습니다.\n";
	cout << wail << "에는 u가 " << us << "개 들어 있습니다.\n";
	return 0;
}
unsigned int c_in_str(const char * str, char ch)
{
	int count = 0;
	while (*str)//문자열을 앞에서부터 하나씩 읽어 개행문자가 나올때까지 ch와 일치하는 단어가나오면 count를 1씩누적하고 반환
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}