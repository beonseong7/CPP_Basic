#include<iostream>
#include<string>
#include<cstring>
int main() {
	using namespace std;
	char charr[20];
	string str;
	cout << "입력 이전에 charr에 있는 문자열의 길이: "
		<< strlen(charr) << endl;//초기화 전에는 해당 문자열의 길이를 정확히 추정할순 없다.
	cout << "입력 이전에 str에 있는 문자열의 길이"
		<< str.size() << endl;
	cout << "텍스트 한 행을 입력하시오:\n";
	cin.getline(charr, 20);
	cout << "입력한 텍스트:" << charr << endl;
	cout << "또 다른 텍스트 한 행을 입력하시오:\n";
	getline(cin, str);//string 변수는 입력된 데이터 크기에따라 알아서 조절되기에 크기를 넣을 필요가 없다.
	cout << "입력한 텍스트: " << str << endl;
	cout << "입력 이후에 charr에 있는 문자열의길이: "
		<< strlen(charr) << endl;
	cout << "입력 이후에 str에 있는 문자열의 길이:"
		<< str.size() << endl;

	return 0;
}