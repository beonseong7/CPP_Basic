#include<iostream>
const int ArSize = 6;
int main() {
	using namespace std;
	float naaq[ArSize];
	cout << "동료들의 뉴에이지 자각 지수(NAAQ)를 입력하시오.\n"
		<< ArSize << "명의 데이터를 모두 입력했거나, 음수를 입력하면\n"
		<< "while 루프를 탈출합니다.\n";

	int i = 0;
	float temp;
	cout << "첫 번째 값: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)// i값이 ArSize보다 크거나 temp가 음수면 탈출
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "그 다음 값: ";
			cin >> temp;
		}
	}
	if (i == 0)//i값이 0 즉, 아무데이터가 없으므로 바로종료
		cout << "입력한 데이터가 없으므로 프로그램을 종료합니다.\n";
	else
	{
		cout << "당신의 NAAQ를 입력하십시오: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++) 
			if (naaq[j] > you)// you보다 naaq배열 데이터 값이 크면 count를 1가산한다.
				++count;
		cout << "동료들 중에서" << count;
		cout << "명이 당신보다 NAAQ가 높습니다.\n";
	}
	return 0;
}