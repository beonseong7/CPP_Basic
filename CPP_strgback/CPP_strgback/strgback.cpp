#include<iostream>
char* buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "문자 하나를 입력하십시오: ";
	cin >> ch;
	cout << "정수 하나를 입력하십시오: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps; //ps에 있는 메모리 해제
	ps = buildstr('+', 20);
	cout << ps << "-Done-" << ps << endl;
	delete[] ps;
	return 0;
}
char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';//문자열 종결
	while (n-- > 0)//n나머지 공간 채우기
		pstr[n] = c;
	return pstr;
}