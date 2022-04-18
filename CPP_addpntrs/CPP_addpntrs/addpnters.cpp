#include<iostream>
int main() {
	using namespace std;
	double wages[3] = { 10000.0, 20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1; // 배열 포인터 기존자리에서 한자리 앞당긴 주소로 변환
	cout << "pw 포인터에 1을 더함:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ",*ps = " << *ps << endl;
	ps = ps + 1; 
	cout << "ps 포인터에 1을 더함:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	cout << "배열 표기로 두 원소에 접근\n";
	cout << "stacks[0] = " << stacks[0]
		<< ",stacks[1] = " << stacks[1] << endl; // 배열 표시로 접근
	cout << "포인터 표기로 두원소에 접근\n";
	cout << "*stacks = " << *stacks
	<< ", *(stacks + 1) = " << *(stacks + 1) << endl; // 연산을 이용해 포인터로 접근
	cout << sizeof(wages) << " = wages 배열의 크기\n";
	cout << sizeof(pw) << " = pw 포인터의 크기\n";
	return 0;

}