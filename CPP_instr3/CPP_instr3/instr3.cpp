#include<iostream>
int main() {
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "이름을 입력하십시오:\n";
	cin.get(name, ArSize).get();//getline과는 달리 get은 개행문자를 날리지않고 남기기때문에 개행문자가 안먹히므로 한번더 입력을 받는 형식으로 처리한다.
	cout << "좋아하는 디저트를 입력하십시오:\n";
	cin.get(dessert, ArSize).get();
	cout << "맛있는" << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << "님! \n";
	return 0;
}