#include<iostream>
#include "coordin.h"
using namespace std;
int main()
{
	rect rplace;
	polar pplace;

	cout << "x값과 y값을 입력하십시오: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);//file2.cpp에있는 함수실행
		show_polar(pplace);//file2.cpp에있는 함수실행
		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) :";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}