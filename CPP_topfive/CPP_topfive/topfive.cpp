#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
	string list[SIZE];//string을 데이터다루듯이 사용가능하다.
	cout << "좋아하는 밤하늘의 광경을 " << SIZE << "개 입력하시오: \n";
	for (int i = 0; i < SIZE; i++)//SiZE 크기만큼 반복
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "입력하신 내용은 다음과 같습니다,:\n";
	display(list, SIZE);
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}