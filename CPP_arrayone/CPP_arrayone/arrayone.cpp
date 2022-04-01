#include <iostream>

int main() {
	using namespace std;
	int yam[3];//3개의 정수형 변수를 넣을수있는 정수형 배열을 선언한다.
	yam[0]=7;//0위치 즉 가장 첫번째 위치의 정수를 7로 정한다.
	yam[1]=8;//두번째 위치의 정수를 8로 정한다.
	yam[2]=6;//세번째 위치의 정수를 6으로 정한다.
	int yamcosts[3] = { 200,300,50 };//배열 선언과동시에 각 자리에 넣고싶은 정수를 넣는다.
	cout << "고구마 합계 = ";
	cout << yam[0] + yam[1] + yam[2] << endl;
	cout << yam[1] << "개가 들어 있는 포장은";
	cout << "개당 " << yamcosts[1] << "원씩 입니다.\n";
	int total = yam[0] * yamcosts[0] + yam[1] * yamcosts[1];
	total = total + yam[2] * yamcosts[2];
	cout << "세포장의 총 가격은 " << total << "원입니다.\n";
	cout << "\nyam 배열의 크기는 " << sizeof(yam); // sizeof(인자값) 는 인자의 데이터 크기를 반환한다. 
	cout << "바이트입니다.\n";
	cout << "원소 하나의 크기는 " << sizeof yam[0];
	cout << "바이트입니다.\n";
	return 0;
}