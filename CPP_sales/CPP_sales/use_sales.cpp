#include<iostream>
#include"sales.h"
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double vals1[12] =
	{
		1220,1100,1122,2212,1232,2334,
		2884,2393,3302,2922,3002,3544
	};

	double vals2[12] =
	{
		12,11,22,21,32,34,
		28,29,33,29,32,35
	};
	Sales sales1(2011, vals1, 12);
	LabeledSales sales2("Blogstar", 2012, vals2, 12);
	cout << "첫 번째 try 블록:\n";
	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for (i = 0; i < 12; ++i)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
	}
}