#include<iostream>
struct inflatable // 구조체의 데이터 구조 설정
{
	char name[20];
	float volume;
	double price;
};
int main() {
	using namespace std;
	inflatable guest =//구조체 변수 선언과 동시에 차례대로 각 변수에 값 대입
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audacious arthur",
		3.12,
		32.99
	};
	cout << "지금 판매하고 있는 모험풍선은\n" << guest.name; // 구조체에 속한 변수값 출력
	cout << "와 " << pal.name << "입니다.\n";// 구조체에 접근하는 방법이라 생각하면 된다.
	cout << "두 제품을 $";
	cout << guest.price + pal.price << "에 드리겠습니다!\n";
	return 0;
}