#include<iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize]; // Arsize 크기의 문자열을 선언
	char dessert[ArSize];
	cout << "이름을 입력하십시오:\n";
	cin.getline(name, ArSize);//개행 직전의 문자까지의 입력값을 name에 적용 ArSize이상의 값이 입력되면 에러 발생
	cout << "좋아하는 디저트를 입력하십시오:\n";
	cin.getline(dessert, ArSize);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다." << name << "님!\n";
	return 0;
}