#include <iostream>

int main() {
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "당신의 체중을 파운드 단위로 입력하십시오: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // lbs변수값을 Lbs_per_stn으로 나눈 몫을 저장한다.
	int pounds = lbs % Lbs_per_stn; // lbs변수값을 Lbs_per_stn으로 나눈 나머지를 저장한다.
	cout << lbs << " 파운드는 " << stone
		<< " 스톤, " << pounds << "파운드입니다.\n";
	return 0;
}