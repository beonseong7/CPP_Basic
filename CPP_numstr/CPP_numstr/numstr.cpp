#include<iostream>

int main() {
	using namespace std;
	cout << "지금사시는 아파트에 언제 입주하셨습니까?\n";
	int year;
	cin >> year;//입주한 날짜 입력
	cin.get();//개행문자 날리기
	cout << "사시는 도시를 말씀해 주시겠습니까?\n";
	char address[80];
	cin.getline(address, 80);//사는 도시 입력 (위 cin.get()을 하지않으면 개행문자를 바로 인식해서 해당 명령어가 바로처리된다)
	cout << "아파트 입주 연도: " << year << endl;
	cout << "도시: " << address << endl;
	cout << "등록이 완료되었습니다!\n";
	return 0;
}