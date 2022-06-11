#include<iostream>
#include<cmath>
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};
void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);
int main() {//이전 코드와 결과는 같지만 이 코드는 원본 구조체를 지시하는 포인터를 대상으로하는점에서 차이가있다.
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "x값과 y값을 입력하십시오:";
	while (cin >> rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "x값과 y값을 입력하십시오(끝내려면 q를입력) : ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "거리 = " << pda->distance;
	cout << ", 각도 = " << pda->angle * Rad_to_deg;
	cout << "도\n";
}
void rect_to_polar(const rect* pxy, polar* pda) 
{
	using namespace std;
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}