#include<iostream>

int main() {
	using std::cout; //using 선언
	using std::cin;
	using std::endl;
	cout << "정수를 하나 입력하십시오: ";
	int by;
	cin >> by;
	cout << "갱신 크기 " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by) // 명령이 끝날때 마다 i에 by만큼 누적한다.
		cout << i << endl;
	return 0;
}