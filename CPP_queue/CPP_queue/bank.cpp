#include<iostream>
#include<cstdlib>
#include<ctime>
#include"queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
	using std::cin;
	using	std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));
	cout << "사례 연구: 히서은행의 ATM\n";
	cout << "큐의 최대 길이를 입력하십시오: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	cout << "시물레이션 시간 수를 입력하십시오: ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;
	cout << "시간당 평균 고객 수를 입력하십시오: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	long wait_time = 0;
	long line_wait = 0;
	for (int cycle = 0; cycle < cyclelimit; cycle)
	{
		if (newcustomer(min_per_cust))
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
	}
}