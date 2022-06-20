#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats의 주소 = " << rats;
	cout << ", rodents = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;//대상을 바꾼다해도 주소를 바꾸는것이아닌 참조변수이기때문에 rats=bunny와 같은 뜻이다.
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "bunnies의 주소 = " << &bunnies;
	cout << ", rodents의 주소 = " << &rodents << endl;
	return 0;
}