#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct Review {
	std::string title;
	int rating;
};
bool operator<(const Review& r1, const Review& r2);
bool worseThan(const Review& r1, const Review& r2);
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using namespace std;
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		cout << "감사합니다. 당신과 같이"
			<< books.size() << "개의 책 등급을 입력하셨습니다.\n"
			<< "등급\t제목\n";
	}
}