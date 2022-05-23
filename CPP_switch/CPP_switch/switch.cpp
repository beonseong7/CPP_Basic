#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main() {
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5) { // choice 값이 5일 때까지 반복
		switch (choice) // choice 값이 case 옆의 값일경우 해당 구문을 실행, 
		{
		case 1 : cout << "\a\a";
			break;//switch문 탈출
		case 2: report();
			break;//switch문 탈출
		case 3: cout << "사장님은 오늘 회사에 계셨습니다.\n";
			break;//switch문 탈출
		case 4: comfort();
			break;//switch문 탈출
		default: cout << "그것은 선택할 수 없습니다.\n"; // 예상외의 값이 입력됐을경우 실행
		}
		showmenu();
		cin >> choice;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
void showmenu() {
	cout << "1,2,3,4,5번 중에서 하나를 선택하십시오:\n"
		"1) 경고음				2) 보고서 \n"
		"3) 알리바이           4) 결려사\n"
		"5) 종료\n";
}
void report()
{
	cout << "이번 분기는 경영 실적이 아주 좋습니다.\n"
		"판매량은 120% 늘어났고, 비용은 35% 줄었습니다.\n";
}
void comfort() {
	cout << "사원들은 당신을 업계 최고의 CEO라고 생각하고 있습니다.\n"
		"이사회도 당신을 업계 최고의 CEO라고 생각하고 있습니다.\n";
}