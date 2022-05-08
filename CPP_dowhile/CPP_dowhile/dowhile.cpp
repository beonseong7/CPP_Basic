#include<iostream>
int main() {
	using namespace std;
	int n;
	cout << "1부터 10까지의 수 주에서";
	cout << "내가 좋아하는 수를 한번 맞추어 보십시오.\n";
	do
	{
		cin >> n;
	} while (n != 7); // n값이 7일때까지 반복 (do문은 무조건 한번은 실행됨)
	cout << "맞았습니다. 내가 좋아하는 수는 럭키 세븐 7입니다. \n";
	return 0;
}