#include<iostream>
#include"stock10.h"

Stock::Stock()
{
	std::cout << "디폴트 생성자가 호출되었습니다.\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string& co, long n, double pr)
{
	std::cout << co << "를 사용하는 생성자가 호출되었습니다.\n";
	company = co;
	if (n < 0)
	{
		std::cerr << "주식 수는 음수가 될 수 없으므로, "
			<< company << " shares를 0으로 설정합니다.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
Stock::~Stock()
{
	std::cout << "안녕, " << company << "!\n";
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "매입 주식 수는 음수가 될 수 없으므로, "
			<< "거래가 취소되었습니다.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
