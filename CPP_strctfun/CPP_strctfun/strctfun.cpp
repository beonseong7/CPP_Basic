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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main() {
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "x값과 y값을 입력하십시오: ";
	while (cin >> rplace.x >> rplace.y) { //입력 오류가 날때까지 반복
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) :";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y); //제곱근 구하는 함수
	answer.angle = atan2(xypos.y, xypos.x);//절대각도 구하는 함수
	return answer;
}
void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "거리 = " << dapos.distance;
	cout << ", 각도 = " << dapos.angle * Rad_to_deg;
	cout << "도\n";
}