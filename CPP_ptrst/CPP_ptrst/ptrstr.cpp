#include<iostream>
#include<cstring>
int main() {
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
	cout << "동물의 종류를 입력하십시오:";
	cin >> animal;

	ps = animal; // ps의 주소를 animal과 일치시김
	cout << ps << "s!\n";
	cout << "strcpy () 사용전 : \n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps,animal); //strcpy를 사용하면 주소가 아닌 해당 주소에 있는 값만 복사해서 적용한다. 결론적으로 주소가 달라진다.
	cout << "strcpy() 사용후:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;
	delete[] ps;
	return 0;
}