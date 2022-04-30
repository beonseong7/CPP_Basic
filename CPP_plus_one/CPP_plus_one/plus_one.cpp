#include<iostream>
int main() {
	using std::cout;
	int a = 20;
	int b = 20;
	cout << "a		= " << a << ":		b = " << b << "\n";
	cout << "a++	= " << a++ << ":	++b = " << ++b << "\n"; //a의 경우 a의 값을 표시하고 ++을 취함, b의경우 ++을 취하고 b를 표시함
	cout << "a		= " << a << ":		b = " << b << "\n";
	return 0;
}