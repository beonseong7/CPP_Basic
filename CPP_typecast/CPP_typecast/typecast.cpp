#include<iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;//float형으로 더해진값이 정수형에 들어가므로 소수부 연산도 포함된다 그러므로 31
	bats = (int)19.99 + (int)11.99;//int형으로 변환해서 들어가므로 30 -- 구시대C스타일
	coots = int(19.99) + int(11.99);//int형으로 변환해서 들어가므로 30 -- 신식 C++스타일
	cout << "바다오리 = " << auks << ", 박쥐 = " << bats;
	cout << ",검둥오리 = " << coots << endl;

	char ch = 'Z';
	cout << " 코드 " << ch << "의 값은";//char형으로 출력
	cout << int(ch) << endl;//int형으로 형변환하여 출력
	cout << "네, 코드 Z의 값은 ";
	cout << static_cast<int>(ch) << endl;//int 형으로 출력
		return 0;
}