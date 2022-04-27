#include<iostream>
const int ArSize = 16;
int main() {
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL; // 해당 배열의 첫번째 자리와 두번째 자리를 1로 초기화
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1]; // 해당 i번째 배열에 i-1번째 값과 i를 곱한값을 넣는다.(팩토리얼)
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}