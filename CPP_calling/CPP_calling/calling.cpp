#include<iostream>

void simple();//void형은 return을 할필요가 없다.

int main() {
	using namespace std;
	cout << "main()에서 simple() 함수를 호출합니다:\n";
	simple();//simple()함수 호출
	cout << "main()이 simple() 함수와 종료됩니다.\n";//simple()호출후 마저진행
	return 0;
}
void simple() {
	using namespace std;
	cout << "여기는 simple() 함수입니다.\n";
}