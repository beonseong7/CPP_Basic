#include<stdexcept>
#include<string>

class Sales
{
public:
	enum { MONTHS = 12 };
	class bad_index : public std::logic_error
	{
	private:
		int bi;
	public:
		explicit bad_index(int ix,
			const std::string& s = "Sales ��ü���� �ε��� ����\n");
		int bi_val() const { return bi; }
		virtual ~bad_index() throw() {}
	};
	explicit Sales(int yy = 0);
	Sales(int yy, const double* gr, int n);
	virtual ~Sales() {}
	int Year() const { return year; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);
private:
	double gross[MONTHS];
	int year;
};