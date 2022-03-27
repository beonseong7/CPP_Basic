#include<iostream>

int main()
{
	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "수를 하나 입력하십시오 : ";
	cin >> hats;
	cout << "다른 수를 입력하십시오 : ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl; //두 변수의 합을 출력
	cout << "hats - heads = " << hats - heads << endl; //두 변수의 차이를 출력
	cout << "hats * heads = " << hats * heads << endl; //두 변수의 곱을 출력
	cout << "hats / heads = " << hats / heads << endl; //두 변수를 나눈값을 출력
}