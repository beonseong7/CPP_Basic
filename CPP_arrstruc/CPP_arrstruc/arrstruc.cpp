#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main() {
	using namespace std;
	inflatable guest[2] =//구조체 배열 선언
	{
		{"Bambi",0.5,21.99},//구조체 첫번째 배열 값 대입
		{"Godzilla",2000,565.99}//구조체 두번재 배열 값 대입
	};
	cout << guest[0].name << "와 " << guest[1].name // 구조체 배열 접근하고 해당 변수 출력
		<< "의 부피를 합하면\n"
		<< guest[0].volume + guest[1].volume//연산도 가능하다.
		<< " 세제곱피트입니다.\n";
	return 0;
}