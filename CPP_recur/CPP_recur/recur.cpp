#include<iostream>
void countdown(int n);
int main() {
	countdown(4);
	return 0;
}
void countdown(int n)//재귀함수
{
	using namespace std;
	cout << "카운트 다운 >>" << n << endl;
	if (n > 0)
		countdown(n - 1);//자기 자신을 호출한다
	cout << n << ": Kaboom!\n";//순차적 호출로 카운트다운43210이 완료되고 countdown(0)부터 순차적으로 실행된다. 
}