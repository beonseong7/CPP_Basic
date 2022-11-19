#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] = { "apiary","beetle","cereal","danger","ensign","florid","garage","health","insult","jackal","keeper","loaner",
	"manage","nonce","onset","plaid","quilt","remote","stolid","train","useful","valid","whence","xenon","yearn","zippy" };
int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;
	std::srand(std::time());
	char play;
	cout << "영어 단어 게임을 하시겠습니까?<y/n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[std::rand() % NUM];
	}
}