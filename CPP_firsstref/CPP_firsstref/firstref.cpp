#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;//rodents의 주소값을 rats와 같게한다.
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;//rats도 동시에 적용된다.
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats의 주소 = " << &rats;
	cout << ", rodents의 주소 = " << &rodents << endl;
	return 0;
}