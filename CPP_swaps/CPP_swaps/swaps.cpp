#include<iostream>
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 3000;
	int wallet2 = 3500;
	cout << "지갑 1 = " << wallet1 << "원";
	cout << "지갑 2 = " << wallet2 << "원\n";
	cout << "참조를 이용하여 내용들을 교환:\n";
	swapr(wallet1, wallet2);//참조변수로 교환
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ",지갑 2 = " << wallet2 << "원\n";
	cout << "포인터를 이용하여 내용들을 다시 교환:\n";
	swapp(&wallet1, &wallet2);//포인터 주소를 인자로 넘겨서 포인터 주소에있는 값을 교환
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원\n";
	cout << "값으로 전달하여 내용교환 시도:\n";
	swapv(wallet1, wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ",지갑 2 = " << wallet2 << "원\n";
	return 0;
}
void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}