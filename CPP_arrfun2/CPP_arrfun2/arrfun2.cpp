#include<iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	std::cout << cookies << " = 배열주소, ";
	std::cout << "sizeof cookies = " << sizeof cookies << std::endl;  //해당 배열의 크기를 출력한다.
	int sum = sum_arr(cookies, ArSize);
	std::cout << "먹은 과자 수 합계: " << sum << std::endl;
	sum = sum_arr(cookies, 3);
	std::cout << "처음 세사람은 과자" << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies + 4, 4);
	std::cout << "마지막 네사람은 과자" << sum << "개를 먹었습니다.\n";
	return 0;
}
int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr,";
	std::cout << "sizeof arr = " << sizeof arr << std::endl;//포인터 변수 arr의 크기를 구해서 출력한다 즉 4
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}