#include<iostream>
#include<string>
#include<cstring>

int main() {
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;//string식 문자열 복사하기
	strcpy_s(charr1, charr2);//char식 문자열 복사하기
	str1 += " paste";//string식 문자열 합치기
	strcat_s(charr1, " juice");//char식 문자열 합치기

	int len1 = str1.size();//str1의 크기를 저장한다.
	int len2 = strlen(charr1);//char식 문자열 크기 저장.
	cout << str1 << " 문자열에는"
		<< len1 << "개의 문자가 들어 있다.\n";
	cout << charr1 << " 문자열에는"
		<< len2 << "개의 문자가 들어 있다.\n";
	return 0;
}