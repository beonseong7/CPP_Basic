#include<iostream>
const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "먹은 과자 수 합게: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다.";
	return 0;
}
int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++) // pt의 주소를 begin으로 맞추고 end 주고 될대까지 pt를 가산한다.
		total = total + *pt;
	return total;
}