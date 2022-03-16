#include<iostream>
#include<cmath>

int main() {
	using namespace std;
	double area;//double형 변수 선언
	cout << "마루 면적을 평방피트 단위로 입력하시오:";
	cin >> area;//입력값을 double형으로 받음
	double side;//double형 변수 선언
	side = sqrt(area);//cmath 라이브러리에있는 함수 sqrt를 사용한다. 해당 함수는 인자값의 제곱근을 리턴한다.
	cout << "사각형 마루라면 한 변이" << side
	<< "피트에 상당합니다." << endl;//회사에 따라 한행에 쓸수있는 문자수가 제한되면 이런식으로 행을 나눠서 진행할 수 있다.
	cout << "멋지네요" << endl;
	return 0;
}