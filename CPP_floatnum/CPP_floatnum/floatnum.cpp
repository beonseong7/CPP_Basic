#include<iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);//c++에선 소숫점 뒤 000표현을 하지않지만 해당 명령어를 통해 표시할수있다.
	float tub = 10.0 / 3.0;//소숫점 뒷자리 6자리까지 저장한다.
	double mint = 10.0 / 3.0;//소숫점 뒷자리 15자리까지 저장한다.
	const float million = 1.0e6;//1.0에 1,000,000을 곱한다.

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nten million tubs = ";
	cout << 10 * million * tub << endl;//백만을 곱했지만 float형이기때문에 유효숫자부분을 넘어가서 정확한 값이 나오지 않는다.
	cout << "mint = " << mint << "and a million mints = ";
	cout << million * mint << endl;//백만을 곱해도 유효숫자 내이므로 333이 계속 출력된다.
	return 0;
}