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
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end());
		cout << "책 제목을 기준으로 정렬:\n등급\t제목\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end(), worseThan);
		cout << "책 등급을 기준으로 정렬:\n등급\t제목\n";
		for_each(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout << "무작위 순서로 다시 배치:\n등급\t제목\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "프로그램을 종료합니다.\n";
	return 0;
}
bool operator<(const Review& r1, const Review& r2)
{
	if (r1.title < r2.title)
		return true;
	else if (r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool worsethan(const Review& r1, const Review& r2)
{
	if (r1.rating < r2.rating)
		return true;
	else
		return false;
}