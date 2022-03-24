#include<iostream>
int main()
{
	using namespace std;
	cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다.\n";//\a 는 경보를 울린다.\"를 사용해 "를 출력한다.
	cout << "8자리 비밀번호를 입력하십시오:_______\b\b\b\b\b\b\b\b";//\b를 8번 썻으므로8번 뒤로간다
	long code;
	cin >> code;
	cout << "\a입력하신 비밀번호는 " << code << "입니다.\n";//\n은 개행할때 사용한다. endl과 비슷하다.
	cout << "\a비밀번호가 맞습니다.! Z3 계획을 진행하십시오!\n";
	return 0;
}