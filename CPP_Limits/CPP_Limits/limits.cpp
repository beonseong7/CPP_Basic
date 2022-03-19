#include <iostream>
#include <climits>// 변수의 최대값 관련된 함수를 가진 라이브러리
int main() {
	using namespace std;
	int n_int = INT_MAX;//int 형의 최대값 저장
	short n_short = SHRT_MAX;//short 형의 최대값 저장
	long n_long = LONG_MAX;//long 형의 최대값 저장
	long long n_llong = LLONG_MAX;//long long 형의 최대값 저장

	cout << "int는 " << sizeof(int) << " 바이트이다." << endl;// sizeof ->변수의 크기를 알아낸다.
	cout << "short는 " << sizeof n_short << " 바이트이다." << endl;
	cout << "long은 " << sizeof n_long << " 바이트이다." << endl;
	cout << "long long은 " << sizeof n_llong << " 바이트이다." << endl;
	cout << endl;
	cout << "최댓값:" << endl;
	cout << "int : " << n_int << endl;
	cout << "short : " << n_short << endl;
	cout << "long : " << n_long << endl;
	cout << "long long : " << n_llong << endl;
	cout << "int의 최솟값 = " << INT_MAX << endl;
	cout << "바이트 당 비트 수 =" << CHAR_BIT << endl;
	return 0;
}