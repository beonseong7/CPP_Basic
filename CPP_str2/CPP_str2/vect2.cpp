#include<iostream>
#include<string>
#include<vector>

struct Review {
	std::string titel;
	int rating;
};
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	int num = books.size();
	if (num > 0)
	{
		cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�.\n"
			<< "���\t����\n";
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		cout << "�� �� �� ����Ѵ�:\n"
			<< "���\t����\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		vector<Review> oldlist(books);
	}
}