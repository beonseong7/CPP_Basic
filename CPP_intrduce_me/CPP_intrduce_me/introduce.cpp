#include<iostream>
#include<string>
// 여러 데이터 타입을 사용해 사용자의 기본정보들을 입력받는 코드다.
int main() {
	using namespace std;
	char name[20];
	string address;
	int age;
	float grade;
	double last_grade;
	cout << "당신의 이름은?";
	cin.getline(name, strlen(name));
	cout << "주소지는?";
	getline(cin, address);
	cout << "당신의 나이는?";
	cin >> age;
	cout << "당신의 평균 학점은?";
	cin >> grade;
	cout << "당신의 직전 학기 성적은?";
	cin >> last_grade;

	cout << "입력된 당신의 정보입니다" << endl;
	cout << "이름:" << name << "   나이:" << age << endl;
	cout << "주소지:" << address << endl;
	cout << "평균 학점:" << grade << "직전 학기 학점:" << last_grade << endl;

	return 0;
}