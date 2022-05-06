#include<iostream>
const int ArSize = 20;
int main() {
	using namespace std;
	char name[ArSize];
	cout << "영문 이름을 입력하십시오: ";
	cin >> name;
	cout << "귀하의 영문 이름을 한줄에 한자씩\n";
	cout << "ASII 코드와 함께 표시하면 이렇습니다. \n";
	int i = 0;
	while (name[i] != '\0') {// 개행문자가 나올때까지 반복
		cout << name[i] << ": " << int(name[i]) << endl; // 해당 위치의 문자를 아스키코드로 변환
		i++;
	}
	return 0;
}