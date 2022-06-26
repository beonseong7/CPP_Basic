#include<iostream>
const int ArSize = 80;
char* left(const char* str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "문자열을 입력하십시오:\n";
	cin.get(sample, ArSize);
	char* ps = left(sample, 5);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[]ps;
	return 0;
}
char* left(const char* str, int n)//n크기이상의 문자를 날리고 반환하는 함수
{
	if (n <= 0)
		n = 2;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}