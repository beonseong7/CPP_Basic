#include <iostream>
int main() {
	using namespace std;
	float a = 2.34E+22f; // 2.34에서 소숫점을 오른쪽으로 22번 옮긴다.
	float b = a + 1.0f; // a숫자에 1.0을더한다 하지만 float형 변수의 범위에 벗어나므로 에러 발생
	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;//결과적으로 0이 출력된다.
	return 0;
}