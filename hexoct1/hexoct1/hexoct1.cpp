#include <iostream>
int main() {
	using namespace std;
	int chest = 42;//10진수로 저장 즉 42
	int waist = 0x42; //16진수로 저장 즉 66
	int inseam = 042;//8진수로 저장 즉 34

	cout << "손님 몸매는 한마디로 끝내 줍니다!\n";
	cout << "가슴둘레" << chest << "\n";
	cout << "허리둘레" << waist << "\n";
	cout << "인심길이" << inseam << "\n";
	return 0;
}