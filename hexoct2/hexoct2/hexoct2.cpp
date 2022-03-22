#include<iostream>
using namespace std;
int main() {

	int chest = 42;
	int waist = 42;
	int inseam = 42;//변수 저장

	cout << "손님 몸매는 한마디로 끝내 줍니다" << endl;
	cout << "가슴둘레" << chest << " (10진수)" << endl;
	cout << hex;// 조정자를 통해 16진수로 바꿈
	cout << "허리둘레" << waist << " (16진수)" << endl;
	cout << oct;// 조정자를 통해 8진수로 바꿈
	cout << "인심길이" << inseam << " (8진수)" << endl;
	return 0;
}