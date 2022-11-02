#include<iostream>
#include<cmath>
#include<string>
#include"exc_mean.h"
class demo
{
private:
	std::string word;
public:
	demo(const std::string& str)
	{
		word = str;
		std::cout << "demo " << word << "생성\n";
	}
	~demo()
	{
		std::cout << "demo" << word << "파괴\n";
	}
	void show() const
	{
		std::cout << "demo" << word << "생존\n";
	}
};
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_geman);
double means(double a, double b) throw(bad_hmean, bad_geman);
