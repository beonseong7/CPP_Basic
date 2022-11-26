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
		cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다.\n"
			<< "등급\t제목\n";
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		cout << "한 번 더 출력한다:\n"
			<< "등급\t제목\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		vector<Review> oldlist(books);
	}
}