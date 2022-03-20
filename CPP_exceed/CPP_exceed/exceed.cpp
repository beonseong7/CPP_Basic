#include <iostream>
#define ZERO 0
#include<climits>
int main() {
	using namespace std;
	short Dohee = SHRT_MAX; //  short의 최댓값으로 저장
	unsigned short Insuk = Dohee;//  short의 양수범위 0~65535로 선언된 unsigend short 변수에 Dohee값 저장

	cout << "도희의 계좌에는 " << Dohee << "원이 들어있고,";
	cout << "인숙이의 계좌에는" << Insuk << "원이 들어 있다." << endl;
	cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제";
	Dohee = Dohee + 1;
	Insuk = Insuk + 1;
	cout << "도희의 잔고에는 " << Dohee << "원이 되었고, ";//dohee 변수에선 이미 최대값이기에 1이 누적되는순간 -범위로 이동한다.
	cout << "인숙이의 잔고는" << Insuk << "원이 되었다." << endl;//insuk 변수에선 아직 최대값이 아니기에 정상 작동한다.
	cout << "이럴 수가! 도희가 나 몰래 대출을 했나?" << endl;
	Dohee = ZERO;//0으로 저장
	Insuk = ZERO;//0으로 저장
	cout << "도희의 계좌에는 " << Dohee << "원이 들어 있고";
	cout << "인숙이의 계좌에도 " << Insuk << "원이 들어 있다." << endl; // insuk
	cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제 ";
	Dohee = Dohee - 1;
	Insuk = Insuk - 1;
	cout << "도희의 잔고는" << Dohee << "원이 되었고,";//dohee 변수에선 최대값이 아니기에 1이 정상적으로 감소한다.
	cout << "인숙이의 잔고는" << Insuk << "원이 되었다." << endl;// insuk에선 최솟값이기에 65535로 이동한다.
	cout << "이럴 수가 ! 인숙이가 복권에 당첨되었나?" << endl;
	return 0;
}