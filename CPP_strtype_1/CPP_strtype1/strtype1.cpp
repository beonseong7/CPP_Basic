#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther"; // pather 문자를 담을 문자열 선언과 동시에 저장
	cout << "고양이과의 동물 한 종을 입력하시오: ";
	cin >> charr1;
	cout << "고양이과의 또 다른 동물 한 종을 입력하시오:";
	cin >> str1;//문자열 입력
	cout << "아래 동물들은 모두 고양이과입니다:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2
		<< endl;
	cout << charr2 << "에서 세번째 글자: "
		<< charr2[2] << endl;
	cout << str2 << "에서 세 번째 글자: "
		<< str2[2] << endl;//0부터 시작해 0,1,2 즉 3번째 데이터를 출력
}