#include<iostream>

void simon(int);//void형 함수 simon을 정의한다.

int main() {
	using namespace std;//네임스페이스 std를 사용한다.(없을시 cin,cout 사용 불가능)
	simon(3); //simon함수에 인자값 3을 넘기고 호출한다.
	cout << " 정수를 하나 고르시오: ";
	int count;
	cin >> count;
	simon(count);//simon함수에 count에 입력한값을 인자값으로 넘기고 호출한다.
	cout << "끝" << endl;
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon 왈, 발가락을 " << n << "번 두드려라" << endl; //정수형 변수 n의 값을 호출한다
	//void 형 함수이기때문에 return을 할 필요가 없다.
}