#include<iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // 정수형 데이터를 실수형으로 저장
	int guess = 3.9832; // 실수형 데이터를 정수형으로 저장
	int debt = 7.2E12; // 데이터가 너무커서 예측 불가
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt  = " << debt << endl;
	return 0;
}